#ifndef _NOSECONE_H
#define _NOSECONE_H

#include "Part.h"

class Nosecone :
	public Part
{
public:

	Nosecone(std::string in_name, std::string in_comments, Material* in_material, 
		NoseconeType in_noseconeType,
		double in_shapeParameter, double in_lengthNose, double in_thickness, double in_diameterOuter, double in_lengthBase,
		double in_thicknessShoulder, double in_lengthShoulder, double in_diameterShoulder,
		bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride);
	
	~Nosecone();

	NoseconeType noseconeType;
	double shapeParameter;
	double lengthNose;
	double thickness;
	double diameterOuter;
	double lengthBase;
	double thicknessShoulder;
	double lengthShoulder;
	double diameterShoulder;

	double radius();
	double length();
	double areaSurface();
	double areaPlanform();
	double areaForward();
	double areaAft();
	double volumeMaterial();
	double volumeInterior();
	double finenessRatio();

	//Overridden virtual functions 
	double diameterAirflow();
	double lengthAirflow();
	double areaReference();
	double areaWet(); 
	double dragCoefficient(const double& in_areaReference, const double& in_finenessRocket, const double& in_machNumber, const double& in_skinFrictionCoefficient, const bool& in_aftMostPart, const double& in_areaThrusting);
	double dragCoefficientFriction(const double& in_skinFrictionCoefficient, const double& in_areaReference, const double& in_finenessRocket);
	double dragCoefficientPressure(const double& in_machNumber, const double& in_areaReference);
	double dragCoefficientBase(const bool& in_aftMostPart, const double& in_machNumber, const double& in_areaThrusting, const double& in_areaReference);

private:	

	//double integrate_trapz(double a, double b, int n, double(nosecone::*)(double));

	double curve_vonKarmen(double x);
	double curve_Conic(double x);
};
#endif // !_NOSECONE_H

