
#ifndef _PART_H
#define _PART_H

#include <algorithm>
#include <cmath>
#include <iostream>

#include "Aerodynamics.h"
#include "Material.h"
#include "InertialOverride.h"

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
		bool in_massOverrideSwitch, const double& in_massOverride, bool in_cgOverrideSwitch, const double& in_cgOverride);
	~Part();

	std::string name;
	Material* material;	
	std::string comments;
	PartType type;	
	InertialOverride inertial;

	double mass();
	double cg();	

	virtual double diameterAirflow() { return 0.0; }
	virtual double lengthAirflow() { return 0.0; }
	virtual double areaReference() { return 0.0; }
	virtual double areaWet() { return 0.0; }
	virtual double volumeMaterial() = 0;

	//drag calculations 
	virtual double dragCoefficient(const double& in_areaReference, const double& in_finenessRocket, 
		const double& in_machNumber, const double& in_skinFrictionCoefficient,
		const bool& in_aftMostPart, const double& in_areaThrusting) {return 0.0;}
	virtual double dragCoefficientFriction(const double& in_skinFrictionCoefficient, 
		const double& in_areaReference, const double& in_finenessRocket) {return 0.0;}
	virtual double dragCoefficientPressure(const double& in_machNumber, const double& in_areaReference) { return 0.0; }
	virtual double dragCoefficientBase(const bool& in_aftMostPart, 
		const double& in_machNumber, const double& in_areaThrusting, const double& in_areaReference) {return 0.0;}
	
private:
	double calculateModelMass();
	double calculateModelCg();
};
#endif

