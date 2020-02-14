#include "Stage.h"

Stage::Stage(const std::string& in_name, const double& in_distanceOverlap, const std::string& in_comments,
	bool in_massOverrideSwitch, const double& in_massOverride, bool in_cgOverrideSwitch, const double& in_cgOverride) :

	inertial(false, in_massOverride, false, in_cgOverride) {

	name = in_name;
	distanceOverlap = in_distanceOverlap;
	comments = in_comments;
}

Stage::~Stage(){

	//delete drag data 
	for (auto it = dragRocketList.begin(); it != dragRocketList.end(); it++) {
		delete (*it);
	}

	for (auto it = dragDrogueList.begin(); it != dragDrogueList.end(); it++) {
		delete (*it);
	}

	for (auto it = dragMainList.begin(); it != dragMainList.end(); it++) {
		delete (*it);
	}
}

void Stage::instanceFlatListRecursive(Instance* parent, std::vector<Instance*> &flatList) {

	flatList.push_back(parent);

	if (!parent->childList.empty()) { //additional instances in child list
		for (auto child : parent->childList) {
			instanceFlatListRecursive(child, flatList);
		}
	}
}
