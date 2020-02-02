

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
