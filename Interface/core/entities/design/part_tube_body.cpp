#include "part_tube_body.h"

TubeBody::TubeBody(std::string name, std::string comments, Material* material,
    const double& length, const double& diameter_outer, const double& thickness,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : Part(name, comments, material, mass_override_switch, mass_override, cg_override_switch, cg_override),
      length_(length),
      diameter_outer_(diameter_outer),
      thickness_(thickness) {

    type_ = PartType::TUBE_BODY;
}

TubeBody::~TubeBody() {}

double TubeBody::DiameterInner() {
    return diameter_outer_ - 2.0 * thickness_;
}

double TubeBody::AreaSurface() {
    return diameter_outer_ *kPi*length_;
}

double TubeBody::VolumeMaterial() {
    return AreaSurface()*thickness_;
}

double TubeBody::VolumeInterior() {
    double radius = diameter_outer_ / 2.0;
    return length_*kPi*std::pow(radius, 2.0);
}

double TubeBody::AreaPlanform() {
    return diameter_outer_ *length_;
}

double TubeBody::DiameterAirflow() {
    return diameter_outer_;
}

double TubeBody::LengthAirflow() {
    return length_;
}

double TubeBody::AreaReference() {
    double radius = diameter_outer_ / 2.0;
    return kPi * std::pow(radius, 2.0);
}

double TubeBody::AreaWet() {
    return AreaSurface();
}

double TubeBody::DragCoefficient(const double& area_reference, const double& fineness_rocket,
    const double& mach_number, const double& skin_friction_coefficient,
    const bool& aft_most_part, const double& area_thrusting) {
    
    return TubeBody::DragCoefficientFriction(skin_friction_coefficient, area_reference, fineness_rocket) +
        DragCoefficientPressure(mach_number, area_reference) +
        DragCoefficientBase(aft_most_part, mach_number, area_thrusting, area_reference);
}

double TubeBody::DragCoefficientFriction(const double& skin_friction_coefficient,
    const double& area_reference, const double& fineness_rocket) {
    
    return Aerodynamics::DragCoefficientFrictionBody(skin_friction_coefficient, fineness_rocket, AreaWet(), area_reference);
}

double TubeBody::DragCoefficientBase(const bool& aft_most_part,
    const double& mach_number, const double& area_thrusting, const double& area_reference) {
    
    return Aerodynamics::DragCoefficientBase(aft_most_part, mach_number, AreaReference(), area_thrusting, area_reference);
}
