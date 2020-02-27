
#ifndef _CONFIGURATION_H
#define _CONFIGURATION_H

#include <iostream>
#include <string>
#include <vector>

#include "Atmosphere.h"
#include "Atmosphere_ISA.h"

#include "Stage.h"

class Configuration
{
public:
	Configuration(std::string in_name, std::string in_comments, SurfaceFinish in_surfaceFinish);
	~Configuration();

	std::string name;
	std::string comments;
	
	//

	std::vector<Stage*> stageList; //{sustainer, stage2, stage1}
	std::vector<Instance*> instanceFlatList(Stage* stage, bool includeStagesAbove);

	/*
	void runSimulation(std::string in_name, std::string in_comments,
		const double& in_heightPad, const double& in_angleLaunchRod, const double& in_lengthLaunchRod,
		Atmosphere* in_atmosphere);
	void reduceExperimentalData(const Stage* stage);
	*/

};
#endif

