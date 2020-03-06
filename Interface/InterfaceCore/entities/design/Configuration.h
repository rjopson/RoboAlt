
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

	std::vector<Stage*> stageList; //{sustainer, stage2, booster}	

	std::vector<Simulation*> simulationList;

	void addStage();
	void deleteStage();
	
	//void deleteFlight();
	void addSimulation(Simulation* simulation);
	void deleteSimulation();

private:
	std::vector<Stage*> getStageListWithStagesAbove(Stage* stage);
	//std::vector<Instance*> instanceFlatList(Stage* stage, bool includeStagesAbove);	
};
#endif

