
#ifndef _CONFIGURATION_H
#define _CONFIGURATION_H

#include <iostream>
#include <string>
#include <vector>

#include "Atmosphere.h"
#include "Atmosphere_ISA.h"

#include "Simulation.h"
#include "Stage.h"

class Configuration
{
public:
	Configuration(std::string in_name, std::string in_comments);
	~Configuration();

	std::string name;
	std::string comments;

	//create/delete stage
	//create/delete simulation
	//create/delete flight

	std::vector<Stage*> stageList; //{sustainer, stage2, booster}	
	void addStage();
	void deleteStage();

	std::vector<Simulation*> simulationList;	
	void addSimulation(Simulation* simulation);
	void deleteSimulation();

private:
	std::vector<Stage*> getStageListWithStagesAbove(Stage* stage);
	//std::vector<Instance*> instanceFlatList(Stage* stage, bool includeStagesAbove);	
};
#endif

