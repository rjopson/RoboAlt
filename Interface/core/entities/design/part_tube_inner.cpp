#include "part_tube_inner.h"

TubeInner::TubeInner(std::string name, std::string comments, Material* material,
    const double& length, const double& diameter_outer, const double& thickness,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override)

    : Part(name, comments, material, mass_override_switch, mass_override, cg_override_switch, cg_override),
    length_(length),
    diameter_outer_(diameter_outer),
    thickness_(thickness) {

    type_ = PartType::TUBE_INNER;
}

TubeInner::~TubeInner() {}

double TubeInner::VolumeMaterial() const {
    return AreaSurface()*thickness_;
}

double TubeInner::DiameterInner() const {
    return diameter_outer_ - 2.0 * thickness_;
}

double TubeInner::AreaSurface() const {
    return diameter_outer_ * kPi*length_;
}
