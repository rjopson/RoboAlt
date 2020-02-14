#include "Part.h"

Part::Part(std::string in_name, std::string in_comments, Material* in_material, 
	bool in_massOverrideSwitch, const double& in_massOverride, bool in_cgOverrideSwitch, const double& in_cgOverride) :

	inertial(in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	name = in_name;
	material = in_material;
	comments = in_comments;
}

Part::~Part() {

}

double Part::mass() {

	if (inertial.massOverrideSwitch) {//user wants override value to be used
		return inertial.massOverride;
	}
	else {
		return calculateModelMass();
	}
}

double Part::cg() {
	
	if (inertial.cgOverrideSwitch) {//user wants override value to be used
		return inertial.cgOverride;
	}
	else {
		return calculateModelCg();
	}
}

double Part::calculateModelMass() {
	return material->density*volumeMaterial();
}

double Part::calculateModelCg() {
	return 0.0;
}