
#ifndef _AERODYNAMICS_H
#define _AERODYNAMICS_H

#include <iostream>
#include <cmath>
#include <vector>

#include "MathUtilities.h"

#define VISCOSITY 0.000015
#define PI 3.141592653589793

enum class SurfaceFinish {
	ROUGH,
	UNFINISHED,
	PAINTED,
	POLISHED
};

enum class NoseconeType {
	VON_KARMEN,
	CONICAL,
	OGIVE,
	HAACK
};

class Aerodynamics
{
public:
	Aerodynamics();
	~Aerodynamics();

	//non dimensional 
	static double machNumber(const double& in_velocity, const double& in_speedSound);
	static double reynoldsNumber(const double& in_velocity, const double& in_length);
	static double prandtlFactor(const double& in_machNumber);
	static double beta(const double& in_machNumber);
	static double dynamicPressure();

	//drag
	static double drag(const double& in_density, const double& in_velocity, const double& in_dragCoefficient, const double& in_areaRef);
	static double dragCoefficientFrictionBody(const double& in_skinFrictionCoefficient, const double& in_finenessRocket,
		const double& in_areaWet, const double& in_areaReference);
	static double dragCoefficientFrictionFins(const double& in_skinFrictionCoefficient,
		const double& in_areaWet, const double& in_areaReference);
	static double dragCoefficientBase(const bool& in_aftMostPart, const double& in_machNumber,
		const double& in_areaReferencePart, const double& in_areaThrusting, const double& in_areaReference);
	static double dragCoefficientBaseFins(const double& in_machNumber, const double& in_areaFinsFrontal, const double& in_areaReference);
	static double dragCoefficientPressureNose(const double& in_machNumber, const double& in_fineness, NoseconeType in_type,
		const double& in_areaReferencePart, const double& in_areaReference);
	static double dragCoefficientPressureFinsRounded(const double& in_machNumber, const double& in_angleSweep,
		const double& in_areaFinsFrontal, const double& in_areaReference);
	static double surfaceRoughness(SurfaceFinish surfaceFinish);

	static double dragCoefficientParachute();

	//skin friction drag
	static double skinFrictionCoefficient(const double& in_surfaceRoughness, const double& in_length,
		const double& in_velocity, const double& in_machNumber);

	//stability


};
#endif

