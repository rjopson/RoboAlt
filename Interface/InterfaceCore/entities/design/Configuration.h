
#ifndef _CONFIGURATION_H
#define _CONFIGURATION_H

#include <iostream>
#include <string>
#include <vector>

#include "Experimental.h"
#include "Simulation.h"

#include "Aerodynamics.h"
#include "Atmosphere.h"
#include "Fins.h"
#include "ManageMass.h"
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

	std::vector<Experimental*> experimentalFlightList;
	std::vector<Simulation*> simulationFlightList;

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

	//Drag calculations
	//double dragCoefficient(const double& in_machNumber, const double& in_velocity);
	//double dragCoefficientFriction(const double& in_machNumber, const double& in_velocity);
	double dragCoefficient(const double& in_machNumber, const double& in_areaThrusting);
	double dragCoefficientFriction(const double& in_machNumber); //assume a speed of sound to pass velocity
	double dragCoefficientPressure(const double& in_machNumber);
	double dragCoefficientBase(const double& in_machNumber, const double& in_areaThrusting);

	std::vector<double> dragCoefficientFrictionParts(const double& in_machNumber);
	std::vector<double> dragCoefficientPressureParts(const double& in_machNumber);
	std::vector<double> dragCoefficientBaseParts(const double& in_machNumber, const double& in_areaThrusting);

	//debugging
	void printDragCoefficients(const double& in_machNumber, const double& in_areaThrusting);

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

