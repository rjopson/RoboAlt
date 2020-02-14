
#ifndef _CONFIGURATION_H
#define _CONFIGURATION_H

#include <iostream>
#include <string>
#include <vector>

#include "Drag.h"
#include "Experimental.h"
#include "Simulation.h"

#include "Stage.h"

class Configuration
{
public:
	Configuration(std::string in_name, std::string in_comments, SurfaceFinish in_surfaceFinish);
	~Configuration();

	std::string name;
	std::string comments;
	
	SurfaceFinish surfaceFinish;

	std::vector<Stage*> stageList; //{sustainer, stage2, stage1}
	std::vector<Instance*> instanceFlatList(const Stage* stage);

	std::vector<Experimental*> experimentalFlightList;
	std::vector<Simulation*> simulationFlightList;		
	
	//geometric calculations
	double areaReference(const Stage* stage);
	double length(const Stage* stage);
	double diameterMax(const Stage* stage);
	double finenessRatio(const Stage* stage);

	//inertia calculations
	double getStageMass(const Stage* stage);
	double getStageCg(const Stage* stage);

	//Drag model calculations
	Drag getDragModel(const Stage* stage, const double& machMin, const double& machMax, const double& steps, const double& motorArea);
	double dragCoefficient(const Stage* stage, const double& in_machNumber, const double& in_areaThrusting);
	double dragCoefficientFriction(const Stage* stage, const double& in_machNumber); //assume a speed of sound to pass velocity
	double dragCoefficientPressure(const Stage* stage, const double& in_machNumber);
	double dragCoefficientBase(const Stage* stage, const double& in_machNumber, const double& in_areaThrusting);
	std::vector<double> dragCoefficientFrictionParts(const Stage* stage, const double& in_machNumber);
	std::vector<double> dragCoefficientPressureParts(const Stage* stage, const double& in_machNumber);
	std::vector<double> dragCoefficientBaseParts(const Stage* stage, const double& in_machNumber, const double& in_areaThrusting);

	//Mechanism to get external drag data from stage
	Drag getDragExternal(const Stage* stage, const std::string& name);

	//debugging
	void printDragCoefficients(const Stage* stage, const double& in_machNumber, const double& in_areaThrusting);
};
#endif

