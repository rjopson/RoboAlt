#include "Part.h"

unsigned int Part::id_counter = 0;

Part::Part(const std::string& name, const std::string& comments, Material* material,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : name_(name),
      comments_(comments),
      material_(material),
      inertial_(mass_override_switch, mass_override, cg_override_switch, cg_override) {

    id_counter++;
    id_ = id_counter;
}

Part::~Part() {}

void Part::SetMaterial(Material* material) {
    material_ = material;
}

void Part::SetOverrideMass(const double& mass) {
    inertial_.mass_override_switch_ = true;
    inertial_.mass_override_ = mass;
}

void Part::SetModelMass() {
    inertial_.mass_override_switch_ = false;
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

double Part::Cg() const {
    
    if (inertial_.cg_override_switch_) {//user wants override value to be used
        return inertial_.cg_override_;
    }
    else {
        return 0.0;
    }
}