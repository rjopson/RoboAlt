
#ifndef _TUBE_BODY_H
#define _TUBE_BODY_H

#include "Part.h"

class TubeBody : public Part
{
public:
	TubeBody(std::string in_name, std::string in_comments, Material* in_material,
		double in_length, double in_diameterOuter, double in_thickness, 
		bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride);
	~TubeBody();

	double length;
	double diameterOuter;
	double thickness;

	double diameterInner();
	double areaSurface();
	double volumeMaterial();
	double volumeInterior();
	double areaPlanform();

	//Overridden virtual functions 
	double diameterAirflow();
	double lengthAirflow();
	double areaReference();
	double areaWet();
	double dragCoefficient(const double& in_areaReference, const double& in_finenessRocket, const double& in_machNumber, const double& in_skinFrictionCoefficient, const bool& in_aftMostPart, const double& in_areaThrusting);
	double dragCoefficientFriction(const double& in_skinFrictionCoefficient, const double& in_areaReference, const double& in_finenessRocket);
	double dragCoefficientBase(const bool& in_aftMostPart, const double& in_machNumber, const double& in_areaThrusting, const double& in_areaReference);

private:
	
};
#endif // !_TUBE_BODY_H

