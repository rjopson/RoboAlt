
#ifndef _PART_H
#define _PART_H

#include <algorithm>
#include <cmath>
#include <iostream>

#include "Aerodynamics.h"
#include "Material.h"
#include "ManageMass.h"

#define PI 3.141592653589793

enum class PartType {
	TUBE_BODY,
	NOSECONE,
	FINS,
	TUBE_INNER,
	BULKHEAD,
	PARACHUTE,
	MASS
};

class Part
{
public:

	Part(std::string in_name, std::string in_comments, Material* in_material, 
		bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride);
	~Part();

	std::string name;
	Material* material;
	ManageMass mass;
	std::string comments;
	PartType type;	

	virtual double diameterAirflow();
	virtual double lengthAirflow();
	virtual double areaReference();
	virtual double areaWet();

	//need to implement these
	virtual double volumeMaterial();
	double calculateMass();

	//drag calculations 
	virtual double dragCoefficient(const double& in_areaReference, const double& in_finenessRocket, const double& in_machNumber, const double& in_skinFrictionCoefficient, const bool& in_aftMostPart, const double& in_areaThrusting);
	virtual double dragCoefficientFriction(const double& in_skinFrictionCoefficient, const double& in_areaReference, const double& in_finenessRocket);
	virtual double dragCoefficientPressure(const double& in_machNumber, const double& in_areaReference);
	virtual double dragCoefficientBase(const bool& in_aftMostPart, const double& in_machNumber, const double& in_areaThrusting, const double& in_areaReference);
	

private:

};
#endif

