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

void TubeInner::SetLength(const double& length) {
    length_ = length;
}

void TubeInner::SetDiameterOuter(const double& diameter_outer) {
    diameter_outer_ = diameter_outer;
}

void TubeInner::SetThickness(const double& thickness) {
    thickness_ = thickness;
}

double TubeInner::Length() const {
    return length_;
}

double TubeInner::DiameterOuter() const {
    return diameter_outer_;
}

double TubeInner::Thickness() const {
    return thickness_;
}

double TubeInner::VolumeMaterial() const {
    return AreaSurface()*thickness_;
}

double TubeInner::DiameterInner() const {
    return diameter_outer_ - 2.0 * thickness_;
}

double TubeInner::AreaSurface() const {
    return diameter_outer_ * kPi*length_;
}
