#include "Instance.h"

Instance::Instance() {

	part = NULL;
	parent = NULL;
	positionFrom = NULL;
}

Instance::Instance(Part* in_part, Instance* in_parent, int in_index, PartPosition in_positionType, double in_positionFrom) {

	part = in_part;
	parent = in_parent;
	positionType = in_positionType;
	positionFrom = in_positionFrom;

	parent->addChild(this, NULL);
}

Instance::~Instance() {

	//remove the instance from it's parent list
	if (parent != NULL) {
		parent->removeChild(this);
	}

	//Delete all children if parent is deleted - these have no meaning
	for (auto it = childList.begin(); it != childList.end(); it++) {
		delete (*it);
	}
}

void Instance::addChild(Instance* in_child, int in_index) {

	in_child->parent = this;

	if (in_index == NULL) {
		childList.push_back(in_child);
	}
	else {
		auto it = std::next(childList.begin(), in_index);
		childList.insert(it, in_child);
	}
}

void Instance::removeChild(Instance* in_child) {

	for (auto it = childList.begin(); it != childList.end(); it++) {
		if ((*it) == in_child) {
			childList.erase(it);
		}
	}
}

double Instance::positionFromParentFront() {

	if (positionType == PartPosition::FOREWARD) {
		return positionFrom;
	}
	else {
		return parent->part->lengthAirflow() - part->lengthAirflow() + positionFrom;
	}
}


