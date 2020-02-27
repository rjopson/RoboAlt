#include "Stage.h"

Stage::Stage(const std::string& in_name, const double& in_distanceOverlap, const std::string& in_comments,
	bool in_massOverrideSwitch, const double& in_massOverride, bool in_cgOverrideSwitch, const double& in_cgOverride) :

	inertial(false, in_massOverride, false, in_cgOverride) {

	name = in_name;
	distanceOverlap = in_distanceOverlap;
	comments = in_comments;
}

Stage::~Stage(){

}

void Stage::instanceFlatListRecursive(Instance* parent, std::vector<Instance*> &flatList) {

	flatList.push_back(parent);

	if (!parent->childList.empty()) { //additional instances in child list
		for (auto child : parent->childList) {
			instanceFlatListRecursive(child, flatList);
		}
	}
}

double Stage::massEmpty() {

	if (inertial.massOverrideSwitch) {//user wants override value to be used
		return inertial.massOverride;
	}
	else {

		double mass = 0.0;
		for (auto instance : instanceRoot->childList) { //loop through each child in top level instances
			mass += instance->part->mass();
		}
		return mass;
	}
}

Drag Stage::getDragDrogueModel() {
	
	for (auto userEvent : userEventsCurrent) {
		if (userEvent.action == Action::DEPLOY_DROGUE) {
			return 
		}
	}
}

Drag Stage::getDragMainModel() {

}
