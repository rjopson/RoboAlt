#include "entity_manager.h"

EntityManager::EntityManager() {
}


EntityManager::~EntityManager() {
}

void EntityManager::CreateMaterial(const std::string& name) {
    materials_.push_back(new Material(name, "", 1000.0));
}

void EntityManager::DeleteMaterial(Material* material) {
    
    auto it = std::find(materials_.begin(), materials_.end(), material);
    if (it != materials_.end()) {
        delete (*it);
        (*it) = nullptr;
        materials_.erase(it);
    }
}

Material* EntityManager::GetMaterial(const std::string& name) {
    return GetEntity(materials_, name);
}

void EntityManager::CreateRocket(const std::string& name) {
    rockets_.push_back(new Rocket(name, ""));
}

void EntityManager::DeleteRocket(Rocket* rocket) {
    
    //Lots of stuff here to delete... config, instances, parts etc.
    DeleteEntity(rockets_, rocket);
}

Rocket* EntityManager::GetRocket(const std::string& name) {
    return GetEntity(rockets_, name);
}

void EntityManager::CreatePart(PartType part_type, const std::string& name, Rocket* rocket) {

    Material* material = nullptr;
    Part* part = nullptr;

    switch (part_type) {
        case PartType::FINS: {
            FinShape* shape = new FinShapeTrapezoidal(0.102, 0.013, 0.051, 0.076);
            Fins* fins = new Fins(name, "", material, shape, FinCrossSection::ROUNDED, 3, 0.003, 0.005, false, 0.0, false, 0.0);
            fins_.push_back(fins);
            part = fins;
            break;
        }
        case PartType::NOSECONE: {
            Nosecone* nosecone = new Nosecone(name, "",
                material, NoseconeType::VON_KARMEN, 1.0, 0.157, 0.01, 0.0, 0.002, 0.03139, 0.0, false, 0.0, false, 0.0);
            nosecones_.push_back(nosecone);
            part = nosecone;
            break;
        }
        case PartType::TUBE_BODY: {
            TubeBody* tube_body = new TubeBody(name, "", 
                material, 0.076, 0.03139, 0.001, false, 0, false, 0);
            body_tubes_.push_back(tube_body);
            part = tube_body;
            break;
        }
    }

    parts_.push_back(part);
    rocket->AddPart(part);
}

void EntityManager::DeletePart(Part* part) {

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

    //remove from database 
    DeleteEntity(parts_, part);
}

Part* EntityManager::GetPart(const std::string& rocket_name, const std::string& part_name) {

    Rocket* rocket = GetEntity(rockets_, rocket_name);
    Part* part;

    if (rocket == nullptr) {
        return nullptr;
    }
    else {
        return GetEntity(rocket->Parts(), part_name);
    }
}

void EntityManager::CreateConfiguration(const std::string& name, Rocket* rocket) {
    configurations_.push_back(new Configuration(name, ""));
    rocket->AddConfiguration(configurations_.back());
    
    //Configuration always must have at least 1 stage
    //CreateStage("Sustainer", configurations_.back());
}

void EntityManager::DeleteConfiguration(Configuration* configuration) {
    //lots of stuff here...

    DeleteEntity(configurations_, configuration);
}

Configuration* EntityManager::GetConfiguration(const std::string& rocket_name, const std::string& configuration_name) {
    
    Rocket* rocket = GetEntity(rockets_, rocket_name);
    Configuration* config;

    if (rocket == nullptr) {
        return nullptr;
    }
    else {
        return GetEntity(rocket->Configurations(), configuration_name);
    }
}

void EntityManager::CreateStage(const std::string& name, Configuration* configuration) {    
    stages_.push_back(new Stage(name, "", SurfaceFinish::PAINTED, 0.0, false, 0.0, false, 0.0));
    configuration->AddStage(stages_.back());
}

void EntityManager::DeleteStage(Stage* stage) {
    //other stuff here...

    DeleteEntity(stages_, stage);
}

Stage* EntityManager::GetStage(const std::string& rocket_name, const std::string& configuration_name, const std::string& stage_name) {
    
    Rocket* rocket = GetEntity(rockets_, rocket_name);
    Configuration* config;
    Stage* stage;

    if (rocket == nullptr) {
        return nullptr;
    }
    else {
        config = GetEntity(rocket->Configurations(), configuration_name);
    }

    if (config == nullptr) {
        return nullptr;
    }
    else {
        return GetEntity(config->Stages(), stage_name);
    }
}

void EntityManager::CreateInstance(const std::string& name, Part* part, PartInstance* parent) {
    instances_.push_back(new PartInstance(name, part, parent, PartPosition::FOREWARD, 0.0));
}

void EntityManager::DeleteInstance(PartInstance* instance) {
    
    DeleteEntity(instances_, instance);
}

PartInstance* EntityManager::GetInstance(const std::string& rocket_name, const std::string& instance_name) {
    
    Rocket* rocket = GetEntity(rockets_, rocket_name);

    if (rocket == nullptr) {
        return nullptr;
    }
    else {
        return GetEntity(rocket->Instances(), instance_name);
    }
}

void EntityManager::CreateSimulation(const std::string& name, Configuration* configuration) {

    simulations_.push_back(new Simulation(name, "", 0.0, 0.0, 2.0));
    configuration->AddSimulation(simulations_.back());
}

void EntityManager::DeleteSimulation(Simulation* simulation) {
    
    for (auto config : configurations_) {
        config->RemoveSimulation(simulation);
    }

    //remove user commands set for simulation...

    DeleteEntity(simulations_, simulation);
}

Simulation* EntityManager::GetSimulation(const std::string& rocket_name, const std::string& configuration_name, const std::string& simulation_name) {
    
    Rocket* rocket = GetEntity(rockets_, rocket_name);
    Configuration* config;
    Simulation* sim;

    if (rocket == nullptr) {
        return nullptr;
    }
    else {
        config = GetEntity(rocket->Configurations(), configuration_name);
    }

    if (config == nullptr) {
        return nullptr;
    }
    else {
        return GetEntity(config->Simulations(), simulation_name);
    }
}

void EntityManager::CreateMotor(const std::string& file_path) {
    motors_.push_back(new Motor(file_path));
}

void EntityManager::DeleteMotor(Motor* motor) {

}

Motor* EntityManager::GetMotor(const std::string& name) {
    return GetEntity(motors_, name);
}
