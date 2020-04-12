#include "part_nosecone.h"

Nosecone::Nosecone(std::string name, std::string comments, Material* material,
    NoseconeType nose_type, const double& shape_parameter,
    const double& length_nose, const double& length_base, const double& length_shoulder,
    const double& thickness, const double& diameter_outer, const double& diameter_shoulder,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : Part(PartType::NOSECONE, name, comments, material, mass_override_switch, mass_override, cg_override_switch, cg_override),
      nose_type_(nose_type),
      shape_parameter_(shape_parameter),
      length_nose_(length_nose),
      length_base_(length_base),
      length_shoulder_(length_shoulder),
      thickness_(thickness),
      diameter_outer_(diameter_outer),
      diameter_shoulder_(diameter_shoulder) {

}

Nosecone::~Nosecone() {}

void Nosecone::SetNoseType(NoseconeType nose_type) {
    nose_type_ = nose_type;
}

void Nosecone::SetShapeParameter(const double& shape_parameter) {
    shape_parameter_ = shape_parameter;
}

void Nosecone::SetLengthNose(const double& length_nose) {
    length_nose_ = length_nose;
}

void Nosecone::SetLengthBase(const double& length_base) {
    length_base_ = length_base;
}

void Nosecone::SetLengthShoulder(const double& length_shoulder) {
    length_shoulder_ = length_shoulder;
}

void Nosecone::SetThickness(const double& thickness) {
    thickness_ = thickness;
}

void Nosecone::SetDiameterOuter(const double& diameter_outer) {
    diameter_outer_ = diameter_outer;
}

void Nosecone::SetDiameterShoulder(const double& diameter_shoulder) {
    diameter_shoulder_ = diameter_shoulder;
}

NoseconeType Nosecone::NoseType() const {
    return nose_type_;
}

double Nosecone::ShapeParameter() const {
    return shape_parameter_;
}

double Nosecone::LengthNose() const {
    return length_nose_;
}

double Nosecone::LengthBase() const {
    return length_base_;
}

double Nosecone::LengthShoulder() const {
    return length_shoulder_;
}

double Nosecone::Thickness() const {
    return thickness_;
}

double Nosecone::DiameterOuter() const {
    return diameter_outer_;
}

double Nosecone::DiameterShoulder() const {
    return diameter_shoulder_;
}

double Nosecone::Radius() const {
    return diameter_outer_ / 2.0;
}

double Nosecone::Length() const {
    return length_nose_ + length_base_;
}

double Nosecone::AreaSurface() const {

    double base = length_base_ * kPi * diameter_outer_;

    //approximate all surface areas using conical function for now
    //TODO: replace this function with the MathUtilities integration function 
    double nose = kPi * length_nose_ * Radius() * std::sqrt(std::pow(Radius() / length_nose_, 2.0) + 1);

    return base + nose;
}

double Nosecone::AreaPlanform() const {

    //approixmate all planform areas using conical function
    return diameter_outer_ * Length() * (2.0 / 3.0);
}

double Nosecone::AreaForward() const {
    return 0.0;
}

double Nosecone::AreaAft() const {
    return kPi * std::pow(Radius(), 2.0);
}

double Nosecone::VolumeInterior() const {
    return 0.0;
}

double Nosecone::FinenessRatio() const {
    return length_nose_ / diameter_outer_;
}

double Nosecone::DiameterAirflow() const {
    return diameter_outer_;
}

double Nosecone::LengthAirflow() const {
    return Length();
}

double Nosecone::AreaReference() const {
    return std::max(AreaForward(), AreaAft());
}

double Nosecone::AreaWet() const {
    return AreaSurface();
}

double Nosecone::VolumeMaterial() const {
    return AreaSurface() * thickness_;
}

double Nosecone::DragCoefficient(const double& area_reference, const double& fineness_rocket,
    const double& mach_number, const double& skin_friction_coefficient,
    const bool& aft_most_part, const double& area_thrusting) const {
    
    return DragCoefficientFriction(skin_friction_coefficient, area_reference, fineness_rocket) +
        DragCoefficientPressure(mach_number, area_reference) +
        DragCoefficientBase(aft_most_part, mach_number, area_thrusting, area_reference);
}

double Nosecone::DragCoefficientFriction(const double& skin_friction_coefficient,
    const double& area_reference, const double& fineness_rocket) const {
    
    return Aerodynamics::DragCoefficientFrictionBody(skin_friction_coefficient, fineness_rocket, AreaWet(), area_reference);
}

double Nosecone::DragCoefficientPressure(const double& mach_number, const double& area_reference) const {
    
    return Aerodynamics::DragCoefficientPressureNose(mach_number, 
        FinenessRatio(), nose_type_, AreaReference(), area_reference);
}

double Nosecone::DragCoefficientBase(const bool& aft_most_part,
    const double& mach_number, const double& area_thrusting, const double& area_reference) const {
    
    return Aerodynamics::DragCoefficientBase(aft_most_part, mach_number, AreaReference(), area_thrusting, area_reference);
}

double Nosecone::CurveVonKarmen(const double& x) {
    return 0.0;
}

double Nosecone::CurveConic(const double& x) {
    return x * (Radius() / length_nose_);
}
