

#include "Configuration.h"

Configuration::Configuration(std::string in_name, std::string in_comments) {

	name = in_name;
	comments = in_comments;

	stageList.push_back(new Stage("Sustainer", "", stageList, SurfaceFinish::PAINTED, 0.0, false, 0.0, false, 0.0));
}

Configuration::~Configuration() {

	//delete stages
	for (auto it_stage = stageList.begin(); it_stage != stageList.end(); it_stage++) {
		delete (*it_stage);
	}	
}

std::vector<Stage*> Configuration::getStageListWithStagesAbove(Stage* stage) {

	std::vector<Stage*> stages;

	for (auto it = stageList.begin(); it != 1 + std::find(stageList.begin(), stageList.end(), stage); it++) {
		stages.push_back((*it));
	}
	return stages;
}

void Configuration::addSimulation(Simulation* simulation) {

	simulationList.push_back(simulation);
	
	//Generate stage list 
	for (auto stage : stageList) {
		SimulationStage* simStage = new SimulationStage(stage);
		simulation->simStageList.push_back(simStage);
	} 
}


