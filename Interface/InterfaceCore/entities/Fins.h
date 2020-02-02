#ifndef _FINS_H
#define _FINS_H

#include "Part.h"
#include "FinShape.h"

enum class FinCrossSection {
	SQUARE,
	ROUNDED,
	AIRFOIL,
	DOUBLE_WEDGE
};

class Fins : public Part
{
public:
	Fins(std::string in_name, std::string in_comments, Material* in_material, 
		FinShape* in_shape, FinCrossSection in_crossSection, int in_number, double in_thickness, double in_radiusFillet,
		bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride);
	~Fins();

	FinShape* shape;
	FinCrossSection crossSection;

	int number;
	double thickness;
	double radiusFillet;

	double areaSurface();
	double areaFrontal();
	double volume();
	double length();

	//Overridden virtual functions 
	double areaReference();
	double areaWet();
	double dragCoefficient(const double& in_areaReference, const double& in_machNumber, const double& in_skinFrictionCoefficient);
	double dragCoefficientFriction(const double& in_skinFrictionCoefficient, const double& in_areaReference);
	double dragCoefficientPressure(const double& in_machNumber, const double& in_areaReference);
	double dragCoefficientBase(const double& in_machNumber, const double& in_areaReference);


private:
	
};
#endif // !_FINS_H



