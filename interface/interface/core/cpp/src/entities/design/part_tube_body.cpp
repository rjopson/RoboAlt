#include "part_tube_body.h"

TubeBody::TubeBody(const std::string& name, const std::string& comments, Material* material,
    const double& length, const double& diameter_outer, const double& thickness,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : Part(PartType::TUBE_BODY, name, comments, material, mass_override_switch, mass_override, cg_override_switch, cg_override),
      length_(length),
      diameter_outer_(diameter_outer),
      thickness_(thickness) {

}

TubeBody::~TubeBody() {}

void TubeBody::SetLength(const double& length) {
    length_ = length;
}

void TubeBody::SetDiameterOuter(const double& diameter_outer) {
    diameter_outer_ = diameter_outer;
}

void TubeBody::SetThickness(const double& thickness) {
    thickness_ = thickness;
}

double TubeBody::Length() const {
    return length_;
}

double TubeBody::DiameterOuter() const {
    return diameter_outer_;
}

double TubeBody::Thickness() const {
    return thickness_;
}

double TubeBody::DiameterInner() const {
    return diameter_outer_ - 2.0 * thickness_;
}

double TubeBody::AreaSurface() const {
    return diameter_outer_ * kPi * length_;
}

double TubeBody::VolumeInterior() const {
    double radius = diameter_outer_ / 2.0;
    return length_ * kPi * std::pow(radius, 2.0);
}

double TubeBody::AreaPlanform() const {
    return diameter_outer_ * length_;
}

double TubeBody::DiameterAirflow() const {
    return diameter_outer_;
}

double TubeBody::LengthAirflow() const {
    return length_;
}

double TubeBody::AreaReference() const {
    double radius = diameter_outer_ / 2.0;
    return kPi * std::pow(radius, 2.0);
}

double TubeBody::AreaWet() const {
    return AreaSurface();
}

double TubeBody::VolumeMaterial() const {
    return AreaSurface() * thickness_;
}

double TubeBody::DragCoefficient(const double& area_reference, const double& fineness_rocket,
    const double& mach_number, const double& skin_friction_coefficient,
    const bool& aft_most_part, const double& area_thrusting) const {
    
    return TubeBody::DragCoefficientFriction(skin_friction_coefficient, area_reference, fineness_rocket) +
        DragCoefficientPressure(mach_number, area_reference) +
        DragCoefficientBase(aft_most_part, mach_number, area_thrusting, area_reference);
}

double TubeBody::DragCoefficientFriction(const double& skin_friction_coefficient,
    const double& area_reference, const double& fineness_rocket) const {
    
    return Aerodynamics::DragCoefficientFrictionBody(skin_friction_coefficient, fineness_rocket, AreaWet(), area_reference);
}

double TubeBody::DragCoefficientBase(const bool& aft_most_part,
    const double& mach_number, const double& area_thrusting, const double& area_reference) const {
    
    return Aerodynamics::DragCoefficientBase(aft_most_part, mach_number, AreaReference(), area_thrusting, area_reference);
}
