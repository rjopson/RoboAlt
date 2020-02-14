#include "InertialOverride.h"



InertialOverride::InertialOverride(bool in_massOverrideSwitch, const double& in_massOverride, bool in_cgOverrideSwitch, const double& in_cgOverride) {

massOverrideSwitch = in_massOverrideSwitch;
massOverride = in_massOverride;
cgOverrideSwitch = in_cgOverrideSwitch;
cgOverride = in_cgOverride;
}


InertialOverride::~InertialOverride()
{
}

void InertialOverride::setOverrideMass(const double& in_mass) {
	massOverride = in_mass;
	massOverrideSwitch = true;
}

void InertialOverride::setOverrideCg(const double& in_cg) {
	cgOverride = in_cg;
	cgOverrideSwitch = true;
}

void InertialOverride::setModelMass() {
	massOverrideSwitch = false;
}

void InertialOverride::setModelMass() {
	cgOverrideSwitch = false;
}

