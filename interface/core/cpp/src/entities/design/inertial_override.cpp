#include "inertial_override.h"

InertialOverride::InertialOverride(bool mass_override_switch, const double& mass_override, 
    bool cg_override_switch, const double& cg_override)
    
    : mass_override_switch_(mass_override_switch),
      mass_override_(mass_override),
      cg_override_switch_(cg_override_switch),
      cg_override_(cg_override) {}


InertialOverride::~InertialOverride() {}

void InertialOverride::SetOverrideMass(const double& mass) {
    mass_override_ = mass;
    mass_override_switch_ = true;
}

void InertialOverride::SetOverrideCg(const double& cg) {
    cg_override_ = cg;
    cg_override_switch_ = true;
}

void InertialOverride::SetModelMass() {
    mass_override_switch_ = false;
}

void InertialOverride::SetModelCg() {
    cg_override_switch_ = false;
}

