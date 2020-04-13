#include "part_point_mass.h"

PointMass::PointMass(std::string name, std::string comments, Material* material,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override)     
    : Part(PartType::POINT_MASS, name, comments, material, mass_override_switch, mass_override, cg_override_switch, cg_override) {

}

PointMass::~PointMass() {}

/*
void PointMass::SetMass(const double& mass) {
    inertial_.mass_ = mass;
}

double PointMass::Mass() const {
    return mass_;
} */

double PointMass::VolumeMaterial() const {
    return this->Mass() / this->AssignedMaterial()->Density();
}
