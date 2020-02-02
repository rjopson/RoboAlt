
#ifndef _CONFIGURATION_H
#define _CONFIGURATION_H

#include <iostream>
#include <vector>
#include "ManageMass.h"

#include "Aerodynamics.h"
#include "Fins.h"
#include "Nosecone.h"
#include "TubeBody.h"
#include "Instance.h"

class Configuration
{
public:
	Configuration(std::string in_name, std::string in_comments, SurfaceFinish in_surfaceFinish,
		bool in_massOverrideSwitch, double in_massOverride,
		bool in_cgOverrideSwitch, double in_cgOverride);
	~Configuration();

	std::string name;
	std::string comments;
	ManageMass mass;
	SurfaceFinish surfaceFinish;

	Instance* instanceHierarchy;	
	std::vector<Instance*> instanceFlatList();

	double areaReference();
	double length();
	double diameterMax();
	double finenessRatio();

private:
	void instanceFlatListRecursive(Instance* parent, std::vector<Instance*> &flatList);
	

	//instance_list
	//simulation_list
	//flight_list
};
#endif

//Instance* nosecone;
//std::vector<Instance*> bodyTubeList;
//std::vector<Instance*> finList;	

