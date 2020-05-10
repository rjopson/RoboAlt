#include "part_bulkhead.h"

Bulkhead::Bulkhead(const std::string& name, const std::string& comments, Material* material,
    const double& diameter, const double& thickness,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : Part(PartType::BULKHEAD, name, comments, material, mass_override_switch, mass_override, cg_override_switch, cg_override),
      diameter_(diameter),
      thickness_(thickness) {

}

Bulkhead::~Bulkhead() {}

void Bulkhead::SetDiameter(const double& diameter) {
    diameter_ = diameter;
}

void Bulkhead::SetThickness(const double& thickness) {
    thickness_ = thickness;
}

double Bulkhead::Diameter() const {
    return diameter_;
}

double Bulkhead::Thickness() const {
    return thickness_;
}

double Bulkhead::VolumeMaterial()  const {
    return kPi * std::pow(diameter_ / 2.0, 2.0)*thickness_;
}
