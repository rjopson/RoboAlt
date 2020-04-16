#include "Part.h"

Part::Part(PartType type, const std::string& name, const std::string& comments, Material* material,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : type_(type),
      Entity(name, comments),
      material_(material),
      inertial_(mass_override_switch, mass_override, cg_override_switch, cg_override) {

}

Part::~Part() {}

void Part::SetMaterial(Material* material) {
    material_ = material;
}

void Part::SetOverrideMass(const double& mass) {
    inertial_.mass_override_ = mass;
}

void Part::SetOverrideMassSwitch(bool use_override) {
    inertial_.mass_override_switch_ = use_override;
}

Material* Part::AssignedMaterial() const {
    return material_;
}

PartType Part::Type() const {
    return type_;
}

double Part::Mass() const {

    if (inertial_.mass_override_switch_) {//user wants override value to be used
        return inertial_.mass_override_;
    }
    else {
        return material_->Density() * VolumeMaterial();
    }
}

double Part::OverrideMass() const {
    return inertial_.mass_override_;
}

bool  Part::OverrideMassSwitch() const {
    return inertial_.mass_override_switch_;
}

double Part::Cg() const {
    
    if (inertial_.cg_override_switch_) {//user wants override value to be used
        return inertial_.cg_override_;
    }
    else {
        return 0.0;
    }
}