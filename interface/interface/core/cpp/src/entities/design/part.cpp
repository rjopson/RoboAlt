#include "Part.h"

Part::Part(PartType type, const std::string& name, const std::string& comments, Material* material,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : type_(type),
      Entity(name, comments),
      material_(material),
      mass_override_switch_(mass_override_switch),
      mass_override_(mass_override),
      cg_override_switch_(cg_override_switch), 
      cg_override_(cg_override) {

}

Part::~Part() {}

void Part::SetMaterial(Material* material) {

    material_ = material;
}

void Part::SetOverrideMass(const double& mass) {
    mass_override_ = mass;
}

void Part::SetOverrideMassSwitch(bool use_override) {
    mass_override_switch_ = use_override;
}

void Part::SetOverrideCg(const double& cg) {
    cg_override_ = cg;
}

void Part::SetOverrideCgSwitch(bool use_override) {
    cg_override_switch_ = use_override;
}
Material* Part::AssignedMaterial() const {
    return material_;
}

PartType Part::Type() const {
    return type_;
}

double Part::Mass() const {

    if (mass_override_switch_) {//user wants override value to be used
        return mass_override_;
    }
    else {
        return material_->Density() * VolumeMaterial();
    }
}

double Part::OverrideMass() const {
    return mass_override_;
}

bool  Part::OverrideMassSwitch() const {
    return mass_override_switch_;
}

double Part::OverrideCg() const {
    return cg_override_;
}

double Part::OverrideCgSwitch() const {
    return cg_override_switch_;
}

double Part::Cg() const {
    
    if (cg_override_switch_) {//user wants override value to be used
        return cg_override_;
    }
    else {
        return 0.0;
    }
}