#include "part_fins.h"

Fins::Fins(std::string name, std::string comments, Material* material,
    FinShape* shape, const FinCrossSection& cross_section,
    const int& number, const double& thickness, const double& radius_fillet,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : Part(PartType::FINS, name, comments, material, mass_override_switch, mass_override, cg_override_switch, cg_override),
      shape_(shape),
      cross_section_(cross_section),
      number_(number),
      thickness_(thickness),
      radius_fillet_(radius_fillet) {
    
}

Fins::~Fins() {
    delete shape_;
}

void Fins::SetShape(FinShape* shape) {    
    delete shape_;
    shape_ = shape;
}

void Fins::SetFinCrossSection(FinCrossSection cross_section) {
    cross_section_ = cross_section;
}

void Fins::SetNumber(const double& number) {
    number_ = number;
}

void Fins::SetThickness(const double& thickness) {
    thickness_ = thickness;
}

void Fins::SetRadiusFillet(const double& radius_fillet) {
    radius_fillet_ = radius_fillet;
}

FinCrossSection Fins::CrossSection() const {
    return cross_section_;
}

int Fins::Number() const {
    return number_;
}

double Fins::Thickness() const {
    return thickness_;
}

double Fins::RadiusFillet() const {
    return radius_fillet_;
}

double Fins::VolumeMaterial() const {
    return AreaSurface() * thickness_;
}

double Fins::AreaWet() const {
    return Fins::AreaSurface();
}

double Fins::DragCoefficient(const double& area_reference, const double& fineness_rocket,
    const double& mach_number, const double& skin_friction_coefficient,
    const bool& aft_most_part, const double& area_thrusting) const {
    
    return DragCoefficientFriction(skin_friction_coefficient, area_reference, fineness_rocket) +
        DragCoefficientPressure(mach_number, area_reference) +
        DragCoefficientBase(aft_most_part, mach_number, area_thrusting, area_reference);
}

double Fins::DragCoefficientFriction(const double& skin_friction_coefficient,
    const double& area_reference, const double& fineness_rocket) const {
    return Aerodynamics::DragCoefficientFrictionFins(skin_friction_coefficient, AreaWet(), area_reference);
}

double Fins::DragCoefficientPressure(const double& mach_number, const double& area_reference) const {
    return Aerodynamics::DragCoefficientPressureFinsRounded(mach_number, shape_->AngleSweepLE(),
        AreaFrontal(), area_reference);
}

double Fins::DragCoefficientBase(const bool& aft_most_part,
    const double& mach_number, const double& area_thrusting, const double& area_reference) const {
    return Aerodynamics::DragCoefficientBaseFins(mach_number, AreaFrontal(), area_reference);
}


double Fins::AreaSurface() const {
    return static_cast<double>(number_)* shape_->AreaPlanform() * 2.0;
}

double Fins::AreaFrontal() const {
    return static_cast<double>(number_)* shape_->Span()* thickness_;
}

double Fins::Length() const {
    return shape_->ChordRoot();
}

double Fins::AreaReference() const {
    return Fins::AreaFrontal();
}

