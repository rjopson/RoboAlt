

#include "Configuration.h"

Configuration::Configuration(std::string in_name, std::string in_comments, SurfaceFinish in_surfaceFinish,
	bool in_massOverrideSwitch, double in_massOverride,
	bool in_cgOverrideSwitch, double in_cgOverride) :

	mass(0.0, in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	name = in_name;
	comments = in_comments;
	surfaceFinish = in_surfaceFinish;

	instanceHierarchy = new Instance();
}

Configuration::~Configuration() {

}

std::vector<Instance*> Configuration::instanceFlatList() {

	std::vector<Instance*> flatList;

	instanceFlatListRecursive(instanceHierarchy, flatList);
	flatList.erase(flatList.begin()); //remove the instance root

	return flatList;
}

double Configuration::areaReference() {
	return PI * std::pow(diameterMax() / 2.0, 2.0);
}

double Configuration::length() {

	double lengthSum = 0.0;

	for (auto instance : instanceHierarchy->childList) {

		if (instance->part->type == PartType::NOSECONE || instance->part->type == PartType::TUBE_BODY) {
			lengthSum += instance->part->lengthAirflow();
		}
	}
	return lengthSum;
}

double Configuration::diameterMax() {

	double diameter = 0.0;

	for (auto instance : instanceHierarchy->childList) {

		if (instance->part->type == PartType::NOSECONE || instance->part->type == PartType::TUBE_BODY) {
			if (instance->part->diameterAirflow() > diameter) {
				diameter = instance->part->diameterAirflow();
			}
		}
	}
	return diameter;
}

double Configuration::finenessRatio() {
	return length() / diameterMax();
}

void Configuration::instanceFlatListRecursive(Instance* parent, std::vector<Instance*> &flatList) {

	flatList.push_back(parent);

	if (!parent->childList.empty()) { //additional instances in child list
		for (auto child : parent->childList) {
			instanceFlatListRecursive(child, flatList);
		}
	}
}

double Configuration::dragCoefficient(const double& in_machNumber, const double& in_areaThrusting) {
	return dragCoefficientFriction(in_machNumber) + 
		dragCoefficientPressure(in_machNumber) + 
		dragCoefficientBase(in_machNumber, in_areaThrusting);
}

double Configuration::dragCoefficientFriction(const double& in_machNumber) {

	double cd = 0.0;

	for (double cd_part : dragCoefficientFrictionParts(in_machNumber)) {
		cd += cd_part;
	}
	return cd;
}

double Configuration::dragCoefficientPressure(const double& in_machNumber) {

	double cd = 0.0;

	for (double cd_part : dragCoefficientPressureParts(in_machNumber)) {
		cd += cd_part;
	}
	return cd;
}

double Configuration::dragCoefficientBase(const double& in_machNumber, const double& in_areaThrusting) {

	double cd = 0.0;

	for (double cd_part : dragCoefficientBaseParts(in_machNumber, in_areaThrusting)) {
		cd += cd_part;
	}
	return cd;
}

std::vector<double> Configuration::dragCoefficientFrictionParts(const double& in_machNumber) {

	std::vector<double> cd;

	Atmosphere atmosphere;
	double velocity = in_machNumber * atmosphere.speedOfSound(0.0);

	double cf = Aerodynamics::skinFrictionCoefficient(Aerodynamics::surfaceRoughness(surfaceFinish), length(), velocity, in_machNumber);

	for (auto instance : instanceFlatList()) {
		cd.push_back(instance->part->dragCoefficientFriction(cf, areaReference(), finenessRatio()));
	}
	return cd;
}

std::vector<double> Configuration::dragCoefficientPressureParts(const double& in_machNumber) {

	std::vector<double> cd;

	for (auto instance : instanceFlatList()) {
		cd.push_back(instance->part->dragCoefficientPressure(in_machNumber, areaReference()));
	}
	return cd;
}

std::vector<double> Configuration::dragCoefficientBaseParts(const double& in_machNumber, const double& in_areaThrusting) {

	std::vector<double> cd;

	for (auto instance : instanceFlatList()) {

		if (instance == instanceHierarchy->childList.back()) { //Get last part 			
			cd.push_back(instanceHierarchy->childList.back()->part->dragCoefficientBase(true, in_machNumber, in_areaThrusting, areaReference()));
		}
		else {
			cd.push_back(0.0);
		}
	}
	return cd;
}

void Configuration::printDragCoefficients(const double& in_machNumber, const double& in_areaThrusting) {

	std::vector<double> cd_friction = dragCoefficientFrictionParts(in_machNumber);
	std::vector<double> cd_pressure = dragCoefficientPressureParts(in_machNumber);
	std::vector<double> cd_base = dragCoefficientBaseParts(in_machNumber, in_areaThrusting);

	std::vector<Instance*> inst = instanceFlatList();

	for (auto it = inst.begin(); it != inst.end(); it++) {

		int index = std::distance(inst.begin(), it);

		std::cout << (*it)->part->name << " "
			<< cd_friction[index] << " "
			<< cd_pressure[index] << " "
			<< cd_base[index] << std::endl;
	}
}
