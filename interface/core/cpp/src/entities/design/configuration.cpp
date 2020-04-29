#include "Configuration.h"

Configuration::Configuration(std::string name, std::string comments) 

    : Entity(name, comments) {
 
}

Configuration::~Configuration() {

    //delete stages
    for (auto it_stage = stages_.begin(); it_stage != stages_.end(); it_stage++) {
        delete (*it_stage);
    }	
}

std::vector<Stage*> Configuration::Stages() const {
    return stages_;
}

std::vector<Simulation*> Configuration::Simulations() const {
    return simulations_;
}

std::vector<Experiment*> Configuration::Flights() const {
    return flights_;
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

        //update simulations to remove stage 
        for (auto sim : simulations_) {
            sim->RemoveStage(stage);
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

void Configuration::AddFlight(Experiment* flight) {
    flights_.push_back(flight);

    for (auto stage : stages_) {
        flights_.back()->AddStage(stage);
    }
}

void Configuration::RemoveFlight(Experiment* flight) {
    
    auto it = std::find(flights_.begin(), flights_.end(), flight);

    if (it != flights_.end()) {
        flights_.erase(it);
    }
}


