#include "entity_manager.h"

EntityManager::EntityManager() {

    //create atmosphere model
    CreateAtmosphereISA();

    //add material database ultimately... for now just create a single material
    CreateMaterial();

    //add motor database ultimately... for now just create a single material
    CreateMotor();
}


EntityManager::~EntityManager() {
    
    for (auto rocket : rockets_) {
        DeleteRocket(rocket);
    }
    for (auto mat : materials_) {
        DeleteMaterial(mat);
    }
    for (auto motor : motors_) {
        DeleteMotor(motor);
    }

    for (auto atmosphere : atmosphere_models_) {
        DeleteAtmosphere(atmosphere);
    }
}

Material* EntityManager::CreateMaterial() {
    std::string name = "material"+std::to_string(materials_.size());
    materials_.push_back(new Material(name, "", 1380.0));
    return materials_.back();
}

void EntityManager::AddMaterial(Material* material) {
    materials_.push_back(material);
}

void EntityManager::DeleteMaterial(Material* material) {

    for (auto part : parts_) {
        if (part->AssignedMaterial() == material) {
            part->SetMaterial(nullptr);
        }
    }
    DeleteEntity(materials_, material);
}

Material* EntityManager::GetMaterial(const std::string& name) {
    return GetEntity(materials_, name);
}

Material* EntityManager::GetDefaultMaterial() const {
    return materials_.front();
}

Rocket* EntityManager::CreateRocket() {
    std::string name = "rocket" + std::to_string(rockets_.size());
    rockets_.push_back(new Rocket(name, ""));
    return rockets_.back();
}

void EntityManager::AddRocket(Rocket* rocket) {
    rockets_.push_back(rocket);
}

void EntityManager::DeleteRocket(Rocket* rocket) {

    for (auto config : rocket->Configurations()) {
        DeleteConfiguration(config);
    }
    for (auto part : rocket->Parts()) {
        DeletePart(part);
    }
    DeleteEntity(rockets_, rocket);
}

Rocket* EntityManager::GetRocket(const std::string& name) {
    return GetEntity(rockets_, name);
}

template <>
Bulkhead* EntityManager::CreatePart<Bulkhead>(Rocket* rocket) {

    std::string name = "part" + std::to_string(parts_.size());
    Part* part = nullptr;

    Bulkhead* bulkhead = new Bulkhead(name, "", GetDefaultMaterial(), 0.027, 0.008, false, 0.0, false, 0.0);
    part = bulkhead;

    parts_.push_back(part);
    rocket->AddPart(part);
    return bulkhead;
}

template <>
Fins* EntityManager::CreatePart<Fins>(Rocket* rocket) {
    
    std::string name = "part" + std::to_string(parts_.size());
    Part* part = nullptr;

    FinShape* shape = new FinShapeTrapezoidal(0.102, 0.013, 0.051, 0.076);
    Fins* fins = new Fins(name, "", GetDefaultMaterial(), shape, FinCrossSection::ROUNDED, 3, 0.003, 0.005, false, 0.0, false, 0.0);
    part = fins;

    parts_.push_back(part);
    rocket->AddPart(part);
    return fins;
}

template <>
Nosecone* EntityManager::CreatePart<Nosecone>(Rocket* rocket) {

    std::string name = "part" + std::to_string(parts_.size());
    Part* part = nullptr;

    Nosecone* nosecone = new Nosecone(name, "",
        GetDefaultMaterial(), NoseconeType::VON_KARMEN, 1.0, 0.157, 0.01, 0.0, 0.002, 0.03139, 0.0, false, 0.0, false, 0.0);
    part = nosecone;

    parts_.push_back(part);
    rocket->AddPart(part);
    return nosecone;
}

template <>
TubeBody* EntityManager::CreatePart<TubeBody>(Rocket* rocket) {

    std::string name = "part" + std::to_string(parts_.size());
    Part* part = nullptr;

    TubeBody* tube_body = new TubeBody(name, "",
        GetDefaultMaterial(), 0.076, 0.03139, 0.001, false, 0, false, 0);
    part = tube_body;

    parts_.push_back(part);
    rocket->AddPart(part);
    return tube_body;
}

template <>
Parachute* EntityManager::CreatePart<Parachute>(Rocket* rocket) {

    std::string name = "part" + std::to_string(parts_.size());
    Part* part = nullptr;

    Parachute* parachute = new Parachute(name, "",
        GetDefaultMaterial(), 0.381, 0.0002, false, 0, false, 0);
    part = parachute;

    parts_.push_back(part);
    rocket->AddPart(part);
    return parachute;
}

void EntityManager::AddPart(Part* part) {
    parts_.push_back(part);
}

void EntityManager::DeletePart(Part* part) {

    //remove part from the rocket it was stored in
    for (auto it = rockets_.begin(); it != rockets_.end(); it++) {
        (*it)->RemovePart(part);
    }

    //remove any instances which used this part
    std::vector<PartInstance*> to_erase = GetPartInstances(part);
    for (auto it = to_erase.begin(); it != to_erase.end(); it++) {
        auto it_found = std::find(instances_.begin(), instances_.end(), (*it));
        if (it_found != instances_.end()) {
            DeletePartInstance((*it_found));
        }
    }

    //remove from database 
    DeleteEntity(parts_, part);
}

Part* EntityManager::GetPart(const std::string& rocket_name, const std::string& part_name) {

    Rocket* rocket = GetEntity(rockets_, rocket_name);

    if (rocket == nullptr) {
        return nullptr;
    }
    else {
        return GetEntity(rocket->Parts(), part_name);
    }
}

Configuration* EntityManager::CreateConfiguration(Rocket* rocket) {

    std::string name = "configuration" + std::to_string(configurations_.size());

    configurations_.push_back(new Configuration(name, ""));
    rocket->AddConfiguration(configurations_.back());
    
    //Configuration always must have at least 1 stage
    //CreateStage("Sustainer", configurations_.back());
    return configurations_.back();
}

void EntityManager::AddConfiguration(Configuration* configuration) {
    configurations_.push_back(configuration);
}

void EntityManager::DeleteConfiguration(Configuration* configuration) {
    for (auto sim : configuration->Simulations()) {
        DeleteSimulation(sim);
    }
    for (auto stage : configuration->Stages()) {
        DeleteStage(stage);
    }
    for (auto flight : configuration->Flights()) {
        DeleteFlight(flight);
    }
    DeleteEntity(configurations_, configuration);
}

Configuration* EntityManager::GetConfiguration(const std::string& rocket_name, const std::string& configuration_name) {
    
    Rocket* rocket = GetEntity(rockets_, rocket_name);

    if (rocket == nullptr) {
        return nullptr;
    }
    else {
        return GetEntity(rocket->Configurations(), configuration_name);
    }
}

Stage* EntityManager::CreateStage(Configuration* configuration) {   

    //std::string name = "stage" + std::to_string(stages_.size());

    stages_.push_back(new Stage("sustainer", "", SurfaceFinish::PAINTED, 0.0, false, 0.0, false, 0.0));
    configuration->AddStage(stages_.back());
    return stages_.back();
}

void EntityManager::AddStage(Stage* stage) {
    stages_.push_back(stage);
}

void EntityManager::DeleteStage(Stage* stage) {

    for (auto config : configurations_) {
        config->RemoveStage(stage);
    }

    std::vector<PartInstance*> to_erase = stage->InstanceRoot()->Children(true);
    for (auto it = to_erase.begin(); it != to_erase.end(); it++) {
        auto it_found = std::find(instances_.begin(), instances_.end(), (*it));
        if (it_found != instances_.end()) {
            DeleteEntity(instances_, (*it_found));
        }
    }

    DeleteEntity(stages_, stage);
}

Stage* EntityManager::GetStage(const std::string& rocket_name, const std::string& configuration_name, const std::string& stage_name) {
    
    Rocket* rocket = GetEntity(rockets_, rocket_name);
    Configuration* config;

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

PartInstance* EntityManager::CreatePartInstance(Part* part, PartInstance* parent) {

    std::string name = "part_instance" + std::to_string(instances_.size());

    instances_.push_back(new PartInstance(name, part, parent, PartPosition::FOREWARD, 0.0));
    return instances_.back();
}

void EntityManager::AddPartInstance(PartInstance* instance) {
    instances_.push_back(instance);
}

void EntityManager::DeletePartInstance(PartInstance* instance) {

    for (auto inst : instance->Children(false)) {
        if (inst->AssignedPart()->Type() == PartType::FINS) {
            DeleteEntity(instances_, inst);
        }
    }

    DeleteEntity(instances_, instance);
}

PartInstance* EntityManager::GetPartInstance(const std::string& rocket_name, const std::string& instance_name) {
    
    Rocket* rocket = GetEntity(rockets_, rocket_name);

    if (rocket == nullptr) {
        return nullptr;
    }
    else {
        return GetEntity(rocket->Instances(), instance_name);
    }
}

std::vector<PartInstance*> EntityManager::GetPartInstances(Part* part) {

    std::vector<PartInstance*> result;

    for (auto inst : instances_) {
        if (inst->AssignedPart() == part) {
            result.push_back(inst);
        }
    }
    return result;
}

Simulation* EntityManager::CreateSimulation(Configuration* configuration) {

    std::string name = "simulation" + std::to_string(simulations_.size());

    simulations_.push_back(new Simulation(name, "", GetDefaultAtmosphere(), 0.0, 0.0, 2.0, 0.05, 0.1));
    configuration->AddSimulation(simulations_.back());

    for (auto stage : simulations_.back()->Stages()) {
        simulations_.back()->SetMotor(GetDefaultMotor(), stage);
    }

    return simulations_.back();
}

void EntityManager::AddSimulation(Simulation* simulation) {
    simulations_.push_back(simulation);
}

void EntityManager::DeleteSimulation(Simulation* simulation) {
    
    for (auto config : configurations_) {
        config->RemoveSimulation(simulation);
    }

    DeleteEntity(simulations_, simulation);
}

Simulation* EntityManager::GetSimulation(const std::string& rocket_name, const std::string& configuration_name, const std::string& simulation_name) {
    
    Rocket* rocket = GetEntity(rockets_, rocket_name);
    Configuration* config;

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

Experiment* EntityManager::CreateFlight(Configuration* configuration) {

    std::string name = "flight" + std::to_string(flights_.size());

    flights_.push_back(new Experiment(name, "", "", GetDefaultAtmosphere(), 0.0, 0.0, 2.0));
    configuration->AddFlight(flights_.back());

    for (auto stage : flights_.back()->Stages()) {
        flights_.back()->SetMotor(GetDefaultMotor(), stage);
    }

    return flights_.back();
}

void EntityManager::AddFlight(Experiment* flight) {
    flights_.push_back(flight);
}

void EntityManager::DeleteFlight(Experiment* flight) {

    for (auto config : configurations_) {
        config->RemoveFlight(flight);
    }

    DeleteEntity(flights_, flight);
}

Experiment* EntityManager::GetFlight(const std::string& rocket_name, const std::string& configuration_name, const std::string& flight_name) {

    Rocket* rocket = GetEntity(rockets_, rocket_name);
    Configuration* config;

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
        return GetEntity(config->Flights(), flight_name);
    }
}

Motor* EntityManager::CreateMotor(const std::string& file_path) {
    motors_.push_back(new Motor(file_path));
    return motors_.back();
}

void EntityManager::AddMotor(Motor* motor) {
    motors_.push_back(motor);
}

Motor* EntityManager::CreateMotor() {

    std::vector<double> delay{ 14 };
    std::vector<double> time{ 0.0, 1.0, 1.1 };
    std::vector<double> thrust{ 0.0, 170.0, 0.0 };

    //define an H128 approximation as default. Should really ever be used with Python wrapper in place...
    motors_.push_back(new Motor("H128W", "AT", "", 0.029, 0.194, delay, 0.09408, 0.2016, time, thrust));
    return motors_.back();
}

void EntityManager::DeleteMotor(Motor* motor) {

    for (auto sim : simulations_) {
        for (auto stage: sim->Stages()) {
            if (sim->AssignedMotor(stage) == motor) {
                sim->SetMotor(nullptr, stage);
            }
        }
    }
    DeleteEntity(motors_, motor);
}

Motor* EntityManager::GetMotor(const std::string& name) {
    return GetEntity(motors_, name);
}

Motor* EntityManager::GetDefaultMotor() const {
    return motors_.front();
}

void EntityManager::DeleteAtmosphere(Atmosphere* atmosphere) {
    DeleteEntity(atmosphere_models_, atmosphere);
}

Atmosphere* EntityManager::CreateAtmosphereISA() {
    //Create default atmosphere to use 
    Atmosphere* atmosphere = new Atmosphere();
    AtmosphereISA atmosphere_model;
    *atmosphere = atmosphere_model.GetModel();
    atmosphere_models_.push_back(atmosphere);
    return atmosphere;
}

Atmosphere* EntityManager::GetDefaultAtmosphere() const {
    return atmosphere_models_.front();
}
