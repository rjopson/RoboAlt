#include "part_mass.h"

Mass::Mass(std::string name, std::string comments, Material* material,
    const double& mass,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : Part(name, comments, material, mass_override_switch, mass_override, cg_override_switch, cg_override),
      mass_(mass) {

    type_ = PartType::MASS;
}

Mass::~Mass() {}

double Mass::VolumeMaterial() const {
    return mass_ / material_->density_;
}
