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
            std::vector<PartInstance*> stage_instances = stage->InstanceList(false);
            list.insert(list.end(), stage_instances.begin(), stage_instances.end());
        }
    }
    return list;
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

/*
void Rocket::CreateConfiguration(std::string name, std::string comments) {
    configurations_.push_back(new Configuration(name, comments));
}

std::vector<Part*> Rocket::GetPartList() {

    std::vector<Part*> parts;

    parts.insert(parts.end(), bulkheads_.begin(), bulkheads_.end());
    parts.insert(parts.end(), fins_.begin(), fins_.end());
    parts.insert(parts.end(), masses_.begin(), masses_.end());
    parts.insert(parts.end(), nosecones_.begin(), nosecones_.end());
    parts.insert(parts.end(), parachutes_.begin(), parachutes_.end());
    parts.insert(parts.end(), body_tubes_.begin(), body_tubes_.end());
    parts.insert(parts.end(), inner_tubes_.begin(), inner_tubes_.end());

    return parts;
}

void Rocket::CreateBulkhead(std::string name, std::string comments, Material* material,
    const double& diameter, const double& thickness,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) {

    bulkheads_.push_back(new Bulkhead(name, comments, material, diameter, thickness,
        mass_override_switch, mass_override, cg_override_switch, cg_override));
}

void Rocket::CreateFins(std::string name, std::string comments, Material* material,
    const FinCrossSection& cross_section,
    const int& number, const double& thickness, const double& radius_fillet,
    const double& chord_root, const double& chord_tip, const double& span, const double& length_sweep,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) {

    FinShape*shape = new FinShapeTrapezoidal(chord_root, chord_tip, span, length_sweep);
    fins_.push_back(new Fins(name, comments, material, shape, cross_section, number, thickness, radius_fillet,
        mass_override_switch, mass_override, cg_override_switch, cg_override));
}

void Rocket::CreateMass(std::string name, std::string comments, Material* material, const double& mass) {

    masses_.push_back(new PointMass(name, comments, material, mass,
        false, 0.0, false, 0.0));
}

void Rocket::CreateNosecone(std::string name, std::string comments, Material* material,
    NoseconeType nose_type, const double& shape_parameter,
    const double& length_nose, const double& length_base, const double& length_shoulder,
    const double& thickness, const double& thickness_shoulder,
    const double& diameter_outer, const double& diameter_shoulder,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) {

    nosecones_.push_back(new Nosecone(name, comments, material, nose_type, shape_parameter,
        length_nose, length_base, length_shoulder, thickness, thickness_shoulder, diameter_outer, diameter_shoulder,
        mass_override_switch, mass_override, cg_override_switch, cg_override));
}

void Rocket::CreateParachute(std::string name, std::string comments, Material* material,
    const double& diameter, const double& thickness,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) {

    parachutes_.push_back(new Parachute(name, comments, material, diameter, thickness,
        mass_override_switch, mass_override, cg_override_switch, cg_override));
}

void Rocket::CreateTubeBody(std::string name, std::string comments, Material* material,
    const double& length, const double& diameter_outer, const double& thickness,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) {

    body_tubes_.push_back(new TubeBody(name, comments, material, length, diameter_outer, thickness,
        mass_override_switch, mass_override, cg_override_switch, cg_override));
}

void Rocket::CreateTubeInner(std::string name, std::string comments, Material* material,
    const double& length, const double& diameter_outer, const double& thickness,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) {

    inner_tubes_.push_back(new TubeInner(name, comments, material, length, diameter_outer, thickness,
        mass_override_switch, mass_override, cg_override_switch, cg_override));
} */

