#include "rocket.h"

Rocket::Rocket(std::string name, std::string comments) 
    : Entity(name, comments) {

}

Rocket::~Rocket() {
}

std::vector<Configuration*> Rocket::Configurations() const {
    return configurations_;
}

std::vector<Part*> Rocket::Parts() const {
    return parts_;
}

std::vector<PartInstance*> Rocket::Instances() const {

    std::vector<PartInstance*> list;

    for (auto config : configurations_) {
        for (auto stage : config->Stages()) {
            std::vector<PartInstance*> stage_instances = stage->InstanceList(false, true);
            list.insert(list.end(), stage_instances.begin(), stage_instances.end());
        }
    }
    return list;
}

std::vector<Motor*> Rocket::Motors() const {
    
    std::vector<Motor*> result;
    for (auto config : configurations_) {
        for (auto sim : config->Simulations()) {
            for (auto motor : sim->Motors()) {

                if (motor != nullptr) {

                    auto it = std::find(result.begin(), result.end(), motor);
                    if (it == result.end()) {
                        result.push_back(motor);
                    }

                }                
            }
        }
    }
    return result;
}

std::vector<Material*> Rocket::Materials() const {

    std::vector<Material*> result;
    for (auto part : parts_) {

        if (part->AssignedMaterial() != nullptr) {

            auto it = std::find(result.begin(), result.end(), part->AssignedMaterial());
            if (it == result.end()) {
                result.push_back(part->AssignedMaterial());
            }
        }        
    }
    return result;
}

void Rocket::AddConfiguration(Configuration* configuration) {
    configurations_.push_back(configuration);
}

void Rocket::AddDrag(Drag* drag) {
    //drag_
}

void Rocket::AddPart(Part* part) {
    parts_.push_back(part);
}

void Rocket::RemoveConfiguration(Configuration* configuration) {
    auto it = std::find(configurations_.begin(), configurations_.end(), configuration);
    configurations_.erase(it);
}

void Rocket::RemoveDrag(Drag* drag) {
  
}

void Rocket::RemovePart(Part* part) {
    auto it = std::find(parts_.begin(), parts_.end(), part);
    
    if (it != parts_.end())
        parts_.erase(it);
}


