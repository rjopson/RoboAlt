#include "Configuration.h"

int Configuration::id_counter = 0;

Configuration::Configuration(std::string name, std::string comments) 

    : name_(name),
      comments_(comments) {

    id_counter++;
    id_ = id_counter;

    stages_.push_back(new Stage("Sustainer", "", stages_, SurfaceFinish::PAINTED, 0.0, false, 0.0, false, 0.0));
}

Configuration::~Configuration() {

    //delete stages
    for (auto it_stage = stages_.begin(); it_stage != stages_.end(); it_stage++) {
        delete (*it_stage);
    }	
}

void Configuration::CreateSimulation(std::string name, std::string comments,
    const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod) {

    simulations_.push_back(new Simulation(name, comments, height_pad, angle_launch_rod, length_launch_rod));

    //Generate stage list 
    for (auto stage : stages_) {
        SimulationStage* sim_stage = new SimulationStage(stage);
        simulations_.back()->sim_stages_.push_back(sim_stage);
    }
}

std::vector<Stage*> Configuration::GetStageListWithStagesAbove(Stage* stage) const {

    std::vector<Stage*> stages;

    for (auto it = stages_.begin(); it != 1 + std::find(stages_.begin(), stages_.end(), stage); it++) {
        stages.push_back((*it));
    }
    return stages;
}


