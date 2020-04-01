#include "Part.h"

int Part::id_counter = 0;

Part::Part(std::string name, std::string comments, Material* material,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : name_(name),
      comments_(comments),
      material_(material),
      inertial_(mass_override_switch, mass_override, cg_override_switch, cg_override) {

    id_counter++;
    id_ = id_counter;
}

Part::~Part() {}

double Part::Mass() {

    if (inertial_.mass_override_switch_) {//user wants override value to be used
        return inertial_.mass_override_;
    }
    else {
        return material_->density_ * VolumeMaterial();
    }
}

double Part::Cg() {
    
    if (inertial_.cg_override_switch_) {//user wants override value to be used
        return inertial_.cg_override_;
    }
    else {
        return 0.0;
    }
}