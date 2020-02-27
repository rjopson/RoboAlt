#include "SimulationStage.h"



SimulationStage::SimulationStage(std::vector<Stage*> in_stageList, Motor* in_motor,
	Drag* in_dragIncludeStagesAbove, Drag* in_dragThisStageOnly, Drag* in_dragDrogue, Drag* in_dragMain,
	std::vector<SimulationEvent> in_userEvents) {

	stageList = in_stageList;
	motor = in_motor;
	userEvents = in_userEvents;

	dragIncludeStagesAbove_interalCalc = false;
	dragThisStageOnly_interalCalc = false;
	dragDrogue_interalCalc = false;
	dragMain_interalCalc = false;

	//Set drag data to use. If user didn't provide, generate internally
	if (in_dragIncludeStagesAbove == nullptr && in_stageList.size() > 1) {
		dragIncludeStagesAbove = new Drag();
		*dragIncludeStagesAbove = getDragModel(true, 0.0, 5.0, 1000); 
		dragIncludeStagesAbove_interalCalc = true;
	}
	if (in_dragThisStageOnly == nullptr) {
		dragThisStageOnly = new Drag();
		*dragThisStageOnly = getDragModel(false, 0.0, 5.0, 1000);
		dragThisStageOnly_interalCalc = true;
	}
	for (auto event : userEvents) {

		if (event.action == Action::DEPLOY_DROGUE) {
			if (in_dragDrogue == nullptr) {
				dragDrogue = new Drag();
				*dragDrogue = event.parachute->getDragModel();
				dragDrogue_interalCalc = true;
			}
		}

		if (event.action == Action::DEPLOY_MAIN) {
			if (in_dragMain == nullptr) {
				dragMain = new Drag();
				*dragMain = event.parachute->getDragModel();
				dragMain_interalCalc = true;
			}
		}
	}
}


SimulationStage::~SimulationStage() {

	if (dragIncludeStagesAbove_interalCalc) {
		delete dragIncludeStagesAbove;
	}

	if (dragThisStageOnly_interalCalc) {
		delete dragThisStageOnly;
	}
	
	if (dragDrogue_interalCalc) {
		delete dragDrogue;
	}
	
	if (dragMain_interalCalc) {
		delete dragMain;
	}
}

std::vector<Instance*> SimulationStage::instanceFlatList(bool includeStagesAbove) {

	std::vector<Instance*> flatList;

	if (includeStagesAbove) {
		//loop through stages including input stage
		for (auto it = stageList.begin(); it != 1 + stageList.end(); it++) {
			(*it)->instanceFlatListRecursive((*it)->instanceRoot, flatList);
			flatList.erase(flatList.begin()); //remove the stage root
		}
	}
	else {
		stageList.back()->instanceFlatListRecursive(stageList.back()->instanceRoot, flatList);
	}
	return flatList;
}

double SimulationStage::areaReference(bool includeStagesAbove) {
	return PI * std::pow(diameterMax(includeStagesAbove) / 2.0, 2.0);
}

double SimulationStage::length(bool includeStagesAbove) {

	double lengthSum = 0.0;

	std::vector<Stage*>::iterator it;
	if (includeStagesAbove) {
		it = stageList.begin();
	}
	else {
		it = stageList.end();
	}

	for (it; it != 1+stageList.end(); it++) {
		for (auto instance : (*it)->instanceRoot->childList) {
			if (instance->part->type == PartType::NOSECONE || instance->part->type == PartType::TUBE_BODY) {
				lengthSum += instance->part->lengthAirflow();
			}
		}
	}
	return lengthSum;
}

double SimulationStage::diameterMax(bool includeStagesAbove) {

	double diameter = 0.0;

	std::vector<Stage*>::iterator it;
	if (includeStagesAbove) {
		it = stageList.begin();
	}
	else {
		it = stageList.end();
	}

	for (it; it != 1 + stageList.end(); it++) {
		for (auto instance : (*it)->instanceRoot->childList) { //loop through each child in top level instances
			if (instance->part->type == PartType::NOSECONE || instance->part->type == PartType::TUBE_BODY) {
				if (instance->part->diameterAirflow() > diameter) {
					diameter = instance->part->diameterAirflow();
				}
			}
		}
	}
	return diameter;
}

double SimulationStage::finenessRatio(bool includeStagesAbove) {
	return length(includeStagesAbove) / diameterMax(includeStagesAbove);
}

double SimulationStage::getMassEmpty(bool includeStagesAbove) {

	double mass = 0.0;

	std::vector<Stage*>::iterator it;
	if (includeStagesAbove) {
		it = stageList.begin();
	}
	else {
		it = stageList.end();
	}

	for (it; it != 1 + stageList.end(); it++) {
		mass += (*it)->massEmpty();
	}
	return mass;
}

Drag SimulationStage::getDragModel(bool includeStagesAbove, const double& machMin, const double& machMax, const double& steps) {

	std::vector<double> mach(steps);
	std::vector<double> cd_powerOff(steps);
	std::vector<double> cd_powerOn(steps);
	Drag drag(true, "Internal Model", DragType::ROCKET, "", "");

	for (int i = 0; i != steps; i++) {

		double m = (double)i*(machMax / ((double)steps));
		mach[i] = m;
		cd_powerOff[i] = dragCoefficient(includeStagesAbove, m, 0.0);
		cd_powerOn[i] = dragCoefficient(includeStagesAbove, m, motor->area());
	}
	drag.areaReference = areaReference(includeStagesAbove);
	drag.dataMachUnpowered = mach;
	drag.dataCdUnpowered = cd_powerOff;
	drag.dataMachPowered = mach;
	drag.dataCdPowered = cd_powerOn;

	return drag;
}

double SimulationStage::dragCoefficient(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting) {
	return dragCoefficientFriction(includeStagesAbove, in_machNumber) +
		dragCoefficientPressure(includeStagesAbove, in_machNumber) +
		dragCoefficientBase(includeStagesAbove, in_machNumber, in_areaThrusting);
}

double SimulationStage::dragCoefficientFriction(bool includeStagesAbove, const double& in_machNumber) {

	double cd = 0.0;

	for (double cd_part : dragCoefficientFrictionParts(includeStagesAbove, in_machNumber)) {
		cd += cd_part;
	}
	return cd;
}

double SimulationStage::dragCoefficientPressure(bool includeStagesAbove, const double& in_machNumber) {

	double cd = 0.0;

	for (double cd_part : dragCoefficientPressureParts(includeStagesAbove, in_machNumber)) {
		cd += cd_part;
	}
	return cd;
}

double SimulationStage::dragCoefficientBase(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting) {

	double cd = 0.0;

	for (double cd_part : dragCoefficientBaseParts(includeStagesAbove, in_machNumber, in_areaThrusting)) {
		cd += cd_part;
	}
	return cd;
}

std::vector<double> SimulationStage::dragCoefficientFrictionParts(bool includeStagesAbove, const double& in_machNumber) {

	std::vector<double> cd;

	Atmosphere_ISA atmosphere;
	double velocity = in_machNumber * atmosphere.speedOfSound(0.0);

	double cf = Aerodynamics::skinFrictionCoefficient(Aerodynamics::surfaceRoughness(getSurfaceFinish(includeStagesAbove)), length(includeStagesAbove), velocity, in_machNumber);

	for (auto instance : instanceFlatList(includeStagesAbove)) {
		cd.push_back(instance->part->dragCoefficientFriction(cf, areaReference(includeStagesAbove), finenessRatio(includeStagesAbove)));
	}
	return cd;
}

std::vector<double> SimulationStage::dragCoefficientPressureParts(bool includeStagesAbove, const double& in_machNumber) {

	std::vector<double> cd;

	for (auto instance : instanceFlatList(includeStagesAbove)) {
		cd.push_back(instance->part->dragCoefficientPressure(in_machNumber, areaReference(includeStagesAbove)));
	}
	return cd;
}

std::vector<double> SimulationStage::dragCoefficientBaseParts(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting) {

	std::vector<double> cd;

	for (auto instance : instanceFlatList(includeStagesAbove)) {

		if (instance == stageList.back()->instanceRoot->childList.back()) { //Get last part 			
			cd.push_back(instance->part->dragCoefficientBase(true, in_machNumber, in_areaThrusting, areaReference(includeStagesAbove)));
		}
		else {
			cd.push_back(0.0);
		}
	}
	return cd;
}

SurfaceFinish SimulationStage::getSurfaceFinish(bool includeStagesAbove) {
	
	SurfaceFinish surfaceFinish = SurfaceFinish::PAINTED;

	std::vector<Stage*>::iterator it;
	if (includeStagesAbove) {
		it = stageList.begin();
	}
	else {
		it = stageList.end();
	}

	for (it; it != 1 + stageList.end(); it++) {
		if ((*it)->surfaceFinish < surfaceFinish) {
			surfaceFinish = (*it)->surfaceFinish;
		}
	}
	return surfaceFinish;
}

void SimulationStage::printDragCoefficients(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting) {

	std::vector<double> cd_friction = dragCoefficientFrictionParts(includeStagesAbove, in_machNumber);
	std::vector<double> cd_pressure = dragCoefficientPressureParts( includeStagesAbove, in_machNumber);
	std::vector<double> cd_base = dragCoefficientBaseParts(in_machNumber, includeStagesAbove, in_areaThrusting);

	std::vector<Instance*> inst = instanceFlatList(includeStagesAbove);

	for (auto it = inst.begin(); it != inst.end(); it++) {

		int index = std::distance(inst.begin(), it);

		std::cout << (*it)->part->name << " "
			<< cd_friction[index] << " "
			<< cd_pressure[index] << " "
			<< cd_base[index] << std::endl;
	}
}
