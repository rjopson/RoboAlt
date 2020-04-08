#include "Configuration.h"

int Configuration::id_counter_ = 0;

Configuration::Configuration(std::string name, std::string comments) 

    : Entity(name, comments) {

    id_counter_++;
    id_ = id_counter_;    
}

Configuration::~Configuration() {

    //delete stages
    for (auto it_stage = stages_.begin(); it_stage != stages_.end(); it_stage++) {
        delete (*it_stage);
    }	
}

void Configuration::AddStage(Stage* stage) {
    stages_.push_back(stage); 
    stage->SetStages(stages_);    
}

void Configuration::RemoveStage(Stage* stage) {

    auto it = std::find(stages_.begin(), stages_.end(), stage);

    if (it != stages_.end()) {
        stages_.erase(it);

        //update stages above for all stages still existing
        for (auto stage : stages_) {
            stage->SetStages(GetStageListWithStagesAbove(stage));
        }
    }   
}

std::vector<Stage*> Configuration::GetStageListWithStagesAbove(Stage* stage) const {

    std::vector<Stage*> stages;

    for (auto it = stages_.begin(); it != 1 + std::find(stages_.begin(), stages_.end(), stage); it++) {
        stages.push_back((*it));
    }
    return stages;
}

void Configuration::AddSimulation(Simulation* simulation) {
    simulations_.push_back(simulation);

    for (auto stage : stages_) {
        simulations_.back()->AddStage(stage);
    }
}

void Configuration::RemoveSimulation(Simulation* simulation) {

    auto it = std::find(simulations_.begin(), simulations_.end(), simulation);

    if (it != simulations_.end()) {
        simulations_.erase(it);
    }
}


