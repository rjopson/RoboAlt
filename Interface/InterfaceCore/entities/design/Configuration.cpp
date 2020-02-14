

#include "Configuration.h"

Configuration::Configuration(std::string in_name, std::string in_comments, SurfaceFinish in_surfaceFinish) {

	name = in_name;
	comments = in_comments;
	surfaceFinish = in_surfaceFinish;

	stageList.push_back(new Stage("sustainer", 0, PartPosition::FOREWARD, 0.0));
}

Configuration::~Configuration() {

	//delete stages
	for (auto it_stage = stageList.begin(); it_stage != stageList.end(); it_stage++) {
		delete (*it_stage);
	}

	for (auto it_ex = experimentalFlightList.begin(); it_ex != experimentalFlightList.end(); it_ex++) {
		delete (*it_ex);
	}

	for (auto it_sim = simulationFlightList.begin(); it_sim != simulationFlightList.end(); it_sim++) {
		delete (*it_sim);
	}
}

std::vector<Instance*> Configuration::instanceFlatList(const Stage* stage) {

	std::vector<Instance*> flatList;

	//loop through stages including input stage
	for (auto it = stageList.begin(); it != 1+std::find(stageList.begin(), stageList.end(), stage); it++) {
		(*it)->instanceFlatListRecursive((*it)->instanceRoot, flatList);
		flatList.erase(flatList.begin()); //remove the stage root
	}
	return flatList;
}

double Configuration::areaReference(const Stage* stage) {
	return PI * std::pow(diameterMax(stage) / 2.0, 2.0);
}

double Configuration::length(const Stage* stage) {

	double lengthSum = 0.0;

	for (auto it = stageList.begin(); it != 1 + std::find(stageList.begin(), stageList.end(), stage); it++) {
		for (auto instance : (*it)->instanceRoot->childList) {

			if (instance->part->type == PartType::NOSECONE || instance->part->type == PartType::TUBE_BODY) {
				lengthSum += instance->part->lengthAirflow();
			}
		}
	}
	return lengthSum;
}

double Configuration::diameterMax(const Stage* stage) {

	double diameter = 0.0;

	for (auto it = stageList.begin(); it != 1 + std::find(stageList.begin(), stageList.end(), stage); it++) { //loop through each stage
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

double Configuration::finenessRatio(const Stage* stage) {
	return length(stage) / diameterMax(stage);
}

double Configuration::getStageMass(const Stage* stage) {

	if (stage->inertial.massOverrideSwitch) { //user wants stage mass to be overridden
		return stage->inertial.massOverride;
	}
	else { //calculate mass for stage
		double mass = 0.0;
		for (auto it = stageList.begin(); it != 1 + std::find(stageList.begin(), stageList.end(), stage); it++) { //loop through each stage
			for (auto instance : (*it)->instanceRoot->childList) { //loop through each child in top level instances
				mass += instance->part->mass();
			}
		}
		return mass;
	}	
}

double Configuration::getStageCg(const Stage* stage) {

	if (stage->inertial.cgOverrideSwitch) { //user wants stage mass to be overridden
		return stage->inertial.cgOverride;
	}
	else { //calculate mass for stage
		return 0.0;
		//still need to write equation to calculate cg
	}
}

Drag Configuration::getDragModel(const Stage* stage, const double& machMin, const double& machMax, const double& steps, const double& motorArea) {

	std::vector<double> mach;
	std::vector<double> cd_powerOff;
	std::vector<double> cd_powerOn;
	Drag drag("Internal Model", DragType::ROCKET, "", "");

	for (int i = 0; i != steps; i++) {

		double m = (double)i*(machMax / ((double)steps));
		mach.push_back(m);
		cd_powerOff.push_back(dragCoefficient(stage, m, 0.0));
		cd_powerOn.push_back(dragCoefficient(stage, m, motorArea));
	}
	drag.areaReference = areaReference(stage);
	drag.dataMachUnpowered = mach;
	drag.dataCdUnpowered = cd_powerOff;
	drag.dataMachPowered = mach;
	drag.dataCdPowered = cd_powerOn;

	return drag;
}

double Configuration::dragCoefficient(const Stage* stage, const double& in_machNumber, const double& in_areaThrusting) {
	return dragCoefficientFriction(stage, in_machNumber) + 
		dragCoefficientPressure(stage, in_machNumber) + 
		dragCoefficientBase(stage, in_machNumber, in_areaThrusting);
}

double Configuration::dragCoefficientFriction(const Stage* stage, const double& in_machNumber) {

	double cd = 0.0;

	for (double cd_part : dragCoefficientFrictionParts(stage, in_machNumber)) {
		cd += cd_part;
	}
	return cd;
}

double Configuration::dragCoefficientPressure(const Stage* stage, const double& in_machNumber) {

	double cd = 0.0;

	for (double cd_part : dragCoefficientPressureParts(stage, in_machNumber)) {
		cd += cd_part;
	}
	return cd;
}

double Configuration::dragCoefficientBase(const Stage* stage, const double& in_machNumber, const double& in_areaThrusting) {

	double cd = 0.0;

	for (double cd_part : dragCoefficientBaseParts(stage, in_machNumber, in_areaThrusting)) {
		cd += cd_part;
	}
	return cd;
}

std::vector<double> Configuration::dragCoefficientFrictionParts(const Stage* stage, const double& in_machNumber) {

	std::vector<double> cd;

	Atmosphere_ISA atmosphere;
	double velocity = in_machNumber * atmosphere.speedOfSound(0.0);

	double cf = Aerodynamics::skinFrictionCoefficient(Aerodynamics::surfaceRoughness(surfaceFinish), length(stage), velocity, in_machNumber);

	for (auto instance : instanceFlatList(stage)) {
		cd.push_back(instance->part->dragCoefficientFriction(cf, areaReference(stage), finenessRatio(stage)));
	}
	return cd;
}

std::vector<double> Configuration::dragCoefficientPressureParts(const Stage* stage, const double& in_machNumber) {

	std::vector<double> cd;

	for (auto instance : instanceFlatList(stage)) {
		cd.push_back(instance->part->dragCoefficientPressure(in_machNumber, areaReference(stage)));
	}
	return cd;
}

std::vector<double> Configuration::dragCoefficientBaseParts(const Stage* stage, const double& in_machNumber, const double& in_areaThrusting) {

	std::vector<double> cd;

	for (auto instance : instanceFlatList(stage)) {

		if (instance == stage->instanceRoot->childList.back()) { //Get last part 			
			cd.push_back(instance->part->dragCoefficientBase(true, in_machNumber, in_areaThrusting, areaReference()));
		}
		else {
			cd.push_back(0.0);
		}
	}
	return cd;
}

void Configuration::printDragCoefficients(const Stage* stage, const double& in_machNumber, const double& in_areaThrusting) {

	std::vector<double> cd_friction = dragCoefficientFrictionParts(stage, in_machNumber);
	std::vector<double> cd_pressure = dragCoefficientPressureParts(stage, in_machNumber);
	std::vector<double> cd_base = dragCoefficientBaseParts(stage, in_machNumber, in_areaThrusting);

	std::vector<Instance*> inst = instanceFlatList(stage);

	for (auto it = inst.begin(); it != inst.end(); it++) {

		int index = std::distance(inst.begin(), it);

		std::cout << (*it)->part->name << " "
			<< cd_friction[index] << " "
			<< cd_pressure[index] << " "
			<< cd_base[index] << std::endl;
	}
}
