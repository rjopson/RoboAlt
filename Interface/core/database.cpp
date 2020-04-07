#include "Database.h"

Database::Database() {
}


Database::~Database() {
}

void Database::CreateMaterial(const std::string& name) {
    materials_.push_back(new Material(name, "", 1000.0));
}

void Database::DeleteMaterial(Material* material) {
    auto it = std::find(materials_.begin(), materials_.end(), material);

    if (it != materials_.end()) {
        delete (*it);
        materials_.erase(it);
    }
}

Material* Database::GetMaterial(const std::string& name) {
    return GetEntity(materials_, name);
}

void Database::CreateRocket(const std::string& name) {
    rockets_.push_back(new Rocket(name, ""));
}

void Database::DeleteRocket(Rocket* rocket) {
    auto it = std::find(rockets_.begin(), rockets_.end(), rocket);

    if (it != rockets_.end()) {
        delete (*it);
        rockets_.erase(it);
    }    
}

Rocket* Database::GetRocket(const std::string& name) {
    return GetEntity(rockets_, name);
}

void Database::CreatePart(const std::string& name, PartType part_type, Rocket* rocket) {

    Material* material = materials_[0];
    Part* part = nullptr;

    switch (part_type) {
        case PartType::FINS: {
            FinShape* shape = new FinShapeTrapezoidal(0.102, 0.013, 0.051, 0.076);
            Fins* fins = new Fins(name, "", material, shape, FinCrossSection::ROUNDED, 3, 0.003, 0.005, false, 0.0, false, 0.0);
            fins_.push_back(fins);
            part = fins;
        }
        case PartType::NOSECONE: {
            Nosecone* nosecone = new Nosecone(name, "",
                material, NoseconeType::VON_KARMEN, 1.0, 0.157, 0.01, 0.0, 0.002, 0.0, 0.03139, 0.0, false, 0.0, false, 0.0);
            nosecones_.push_back(nosecone);
            part = nosecone;
        }
        case PartType::TUBE_BODY: {
            TubeBody* tube_body = new TubeBody(name, "", 
                material, 0.076, 0.03139, 0.001, false, 0, false, 0);
            body_tubes_.push_back(tube_body);
            part = tube_body;
        }
    }

    parts_.push_back(part);
    rocket->AddPart(part);
}

void Database::DeletePart(Part* part) {

    //remove part from the rocket it was stored in
    for (auto it = rockets_.begin(); it != rockets_.end(); it++) {
        (*it)->RemovePart(part);
    }

    //remove any instances which used this part
    for (auto it = instances_.begin(); it != instances_.end(); ) {
        if ((*it)->AssignedPart() == part) {
            delete (*it);
            instances_.erase(it);
        }
        else {
            ++it;
        }
    }
}

Fins* Database::GetFins(const std::string& name) {
    return GetEntity(fins_, name);
}

Nosecone* Database::GetNosecone(const std::string& name) {
    return GetEntity(nosecones_, name);
}

TubeBody* Database::GetTubeBody(const std::string& name) {
    return GetEntity(body_tubes_, name);
}

void Database::CreateConfiguration(const std::string& name, Rocket* rocket) {
    configurations_.push_back(new Configuration(name, ""));
    rocket->AddConfiguration(configurations_.back());
    
    //Configuration always must have at least 1 stage
    //CreateStage("Sustainer", configurations_.back());
}

void Database::DeleteConfiguration(Configuration* configuration) {
    //lots of stuff here...
}

Configuration* Database::GetConfiguration(const std::string& name) {
    return GetEntity(configurations_, name);
}

void Database::CreateStage(const std::string& name, Configuration* configuration) {    
    stages_.push_back(new Stage(name, "", SurfaceFinish::PAINTED, 0.0, false, 0.0, false, 0.0));
    configuration->AddStage(stages_.back());
}

void Database::DeleteStage(Stage* stage) {
    //...
}

Stage* Database::GetStage(const std::string name) {
    return GetEntity(stages_, name);
}

void Database::CreateInstance(const std::string& name, Part* part, Stage* stage) {
    instances_.push_back(new Instance(name, part, nullptr, PartPosition::FOREWARD, 0.0));
    stage->AddInstance(instances_.back());
}

void Database::CreateInstance(const std::string& name, Part* part, Instance* parent) {
    instances_.push_back(new Instance(name, part, parent, PartPosition::FOREWARD, 0.0));
}

void Database::DeleteInstance(Instance* instance) {
    auto it = std::find(instances_.begin(), instances_.end(), instance);
    if (it != instances_.end()) {
        delete (*it);
        instances_.erase(it);
    }
}

Instance* Database::GetInstance(const std::string& name) {
    return GetEntity(instances_, name);
}