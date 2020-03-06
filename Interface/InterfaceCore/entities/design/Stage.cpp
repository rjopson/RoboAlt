#include "Stage.h"

Stage::Stage(const std::string& in_name, const std::string& in_comments, std::vector<Stage*> in_StagesAboveList,
	SurfaceFinish in_surfaceFinish, const double& in_distanceOverlap,
	bool in_massOverrideSwitch, const double& in_massOverride, bool in_cgOverrideSwitch, const double& in_cgOverride) :

	inertial(false, in_massOverride, false, in_cgOverride) {

	name = in_name;
	distanceOverlap = in_distanceOverlap;
	comments = in_comments;
	stagesAboveList = in_StagesAboveList;
	surfaceFinish = in_surfaceFinish;

	instanceRoot = new Instance();
}

Stage::~Stage(){
	delete instanceRoot;
}

void Stage::instanceFlatListRecursive(Instance* parent, std::vector<Instance*> &flatList) {

	flatList.push_back(parent);

	if (!parent->childList.empty()) { //additional instances in child list
		for (auto child : parent->childList) {
			instanceFlatListRecursive(child, flatList);
		}
	}
}

std::vector<Instance*> Stage::instanceFlatList(bool includeStagesAbove) {

	std::vector<Instance*> flatList;

	if (includeStagesAbove) {
		for (auto it = stagesAboveList.begin(); it != stagesAboveList.end(); it++) {
			(*it)->instanceFlatListRecursive((*it)->instanceRoot, flatList);
			flatList.erase(flatList.begin()); //remove the stage root
		}
	}

	//Always do this stage
	instanceFlatListRecursive(instanceRoot, flatList);
	flatList.erase(flatList.begin()); //remove the stage root

	return flatList;
}

double Stage::areaReference(bool includeStagesAbove) {
	return PI * std::pow(diameterMax(includeStagesAbove) / 2.0, 2.0);
}

double Stage::length(bool includeStagesAbove) {

	double lengthSum = 0.0;
	std::vector<Stage*> stageList;

	if (includeStagesAbove) {
		stageList = stagesAboveList;
	}
	
	//Add base stage always
	stageList.push_back(this);

	for (auto stage : stageList) {
		for (auto instance : stage->instanceRoot->childList) {
			if (instance->part->type == PartType::NOSECONE || instance->part->type == PartType::TUBE_BODY) {
				lengthSum += instance->part->lengthAirflow();
			}
		}
	}
	return lengthSum;
}

double Stage::diameterMax(bool includeStagesAbove) {

	double diameter = 0.0;

	std::vector<Stage*> stageList;

	if (includeStagesAbove) {
		stageList = stagesAboveList;
	}

	//Add base stage always
	stageList.push_back(this);

	for (auto stage : stageList) {
		for (auto instance : stage->instanceRoot->childList) { //loop through each child in top level instances
			if (instance->part->type == PartType::NOSECONE || instance->part->type == PartType::TUBE_BODY) {
				if (instance->part->diameterAirflow() > diameter) {
					diameter = instance->part->diameterAirflow();
				}
			}
		}
	}
	return diameter;
}

double Stage::finenessRatio(bool includeStagesAbove) {
	return length(includeStagesAbove) / diameterMax(includeStagesAbove);
}

double Stage::massEmpty(bool includeStagesAbove) {

	double mass = 0.0;

	std::vector<Stage*> stageList;

	if (includeStagesAbove) {
		stageList = stagesAboveList;
	}

	//Add base stage always
	stageList.push_back(this);

	for (auto stage : stageList) {

		if (inertial.massOverrideSwitch) {//user wants override value to be used
			mass += inertial.massOverride;
		}
		else {
			for (auto instance : instanceRoot->childList) { //loop through each child in top level instances
				mass += instance->part->mass();
			}
		}
	}
	return mass;
}

SurfaceFinish Stage::getSurfaceFinish(bool includeStagesAbove) {

	SurfaceFinish surfaceFinish = SurfaceFinish::PAINTED;

	std::vector<Stage*> stageList;

	if (includeStagesAbove) {
		stageList = stagesAboveList;
	}

	//Add base stage always
	stageList.push_back(this);

	for (auto stage : stageList) {
		if (stage->surfaceFinish < surfaceFinish) {
			surfaceFinish = stage->surfaceFinish;
		}
	}
	return surfaceFinish;
}

Drag Stage::getDragModel(bool includeStagesAbove, const double& areaMotor,
	const double& machMin, const double& machMax, const double& steps) {

	std::vector<double> mach(steps);
	std::vector<double> cd_powerOff(steps);
	std::vector<double> cd_powerOn(steps);
	Drag drag(true, "Internal Model", DragType::ROCKET, "", "");

	for (int i = 0; i != steps; i++) {

		double m = (double)i*(machMax / ((double)steps));
		mach[i] = m;
		cd_powerOff[i] = dragCoefficient(includeStagesAbove, m, 0.0);
		cd_powerOn[i] = dragCoefficient(includeStagesAbove, m, areaMotor);
	}

	drag.areaReference = areaReference(includeStagesAbove);
	drag.dataMachUnpowered = mach;
	drag.dataCdUnpowered = cd_powerOff;
	drag.dataMachPowered = mach;
	drag.dataCdPowered = cd_powerOn;

	return drag;
}

double Stage::dragCoefficient(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting) {
	return dragCoefficientFriction(includeStagesAbove, in_machNumber) +
		dragCoefficientPressure(includeStagesAbove, in_machNumber) +
		dragCoefficientBase(includeStagesAbove, in_machNumber, in_areaThrusting);
}

double Stage::dragCoefficientFriction(bool includeStagesAbove, const double& in_machNumber) {

	double cd = 0.0;
	Atmosphere_ISA atmosphere;
	double velocity = in_machNumber * atmosphere.speedOfSound(0.0);

	double cf = Aerodynamics::skinFrictionCoefficient(Aerodynamics::surfaceRoughness(getSurfaceFinish(includeStagesAbove)), length(includeStagesAbove), velocity, in_machNumber);

	for (auto instance : instanceFlatList(includeStagesAbove)) {
		cd += instance->part->dragCoefficientFriction(cf, areaReference(includeStagesAbove), finenessRatio(includeStagesAbove));
	}

	return cd;
}

double Stage::dragCoefficientPressure(bool includeStagesAbove, const double& in_machNumber) {

	double cd = 0.0;

	for (auto instance : instanceFlatList(includeStagesAbove)) {
		cd += instance->part->dragCoefficientPressure(in_machNumber, areaReference(includeStagesAbove));
	}
	return cd;
}

double Stage::dragCoefficientBase(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting) {

	double cd = 0.0;

	std::vector<Instance*> instanceList = instanceFlatList(includeStagesAbove);

	for (auto instance : instanceList) {
		bool aftMost = false;
		if (instance == instanceRoot->childList.back()) {
			aftMost = true;
		}
		cd += instance->part->dragCoefficientBase(aftMost, in_machNumber, in_areaThrusting, areaReference(includeStagesAbove));
	}
	return cd;
}

/*
void Stage::printDragCoefficients(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting) {

	std::vector<double> cd_friction = dragCoefficientFrictionParts(includeStagesAbove, in_machNumber);
	std::vector<double> cd_pressure = dragCoefficientPressureParts(includeStagesAbove, in_machNumber);
	std::vector<double> cd_base = dragCoefficientBaseParts(in_machNumber, includeStagesAbove, in_areaThrusting);

	std::vector<Instance*> inst = instanceFlatList(includeStagesAbove);

	for (auto it = inst.begin(); it != inst.end(); it++) {

		int index = std::distance(inst.begin(), it);

		std::cout << (*it)->part->name << " "
			<< cd_friction[index] << " "
			<< cd_pressure[index] << " "
			<< cd_base[index] << std::endl;
	}
} */
