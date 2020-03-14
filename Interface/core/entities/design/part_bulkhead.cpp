#include "part_bulkhead.h"

Bulkhead::Bulkhead(std::string name, std::string comments, Material* material,
    const double& diameter, const double& thickness,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : Part(name, comments, material, mass_override_switch, mass_override, cg_override_switch, cg_override),
      diameter_(diameter),
      thickness_(thickness) {

    type_ = PartType::BULKHEAD;
}

Bulkhead::~Bulkhead() {}
