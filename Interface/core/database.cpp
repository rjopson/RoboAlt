#include "Database.h"

Database::Database() {
}


Database::~Database() {
}

void Database::CreateRocket(std::string name, std::string comments) {
    rockets_.push_back(new Rocket(name, comments));
}

Rocket* Database::GetRocket(const int& id) {

    for (auto rocket : rockets_) {
        if (rocket->id_ == id) {
            return rocket;
        }
    }
    return nullptr; //rocket with id wasn't found
}

Configuration* Database::GetConfiguration(const int& id) {

    for (auto rocket : rockets_) {
        for (auto config : rocket->configurations_) {
            if (config->id_ == id) {
                return config;
            }
        }
    }
    return nullptr; //config with id wasn't found
}

Stage* Database::GetStage(const int& id) {

    for (auto rocket : rockets_) {
        for (auto config : rocket->configurations_) {
            for (auto stage : config->stages_) {
                if (stage->id_ == id) {
                    return stage;
                }
            }
        }
    }
    return nullptr; //config with id wasn't found
}

Instance* Database::GetInstance(const int& id) {

    for (auto rocket : rockets_) {
        for (auto config : rocket->configurations_) {
            for (auto stage : config->stages_) {
                for (auto instance : stage->InstanceFlatList(false)) {
                    if (instance->id_ == id) {
                        return instance;
                    }
                }
            }
        }
    }

    return nullptr; //config with id wasn't found
}

Part* Database::GetPart(const int& id) {

    for (auto rocket : rockets_) {
        for (auto part : rocket->GetPartList()) {
            if (part->id_ == id) {
                return part;
            }
        }
    }
    return nullptr; //part with id wasn't found
}

SimulationStage* Database::GetSimulationStage(const int& id) {

    for (auto rocket : rockets_) {
        for (auto config : rocket->configurations_) {
            for (auto sim : config->simulations_) {
                for (auto sim_stage : sim->sim_stages_) {
                    if (sim_stage->id_ == id) {
                        return sim_stage;
                    }
                }
            }
        }
    }
    return nullptr;
}
