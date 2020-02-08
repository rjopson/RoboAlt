
#ifndef _TUBE_INNER_H
#define _TUBE_INNER_H

#include "Part.h"


class TubeInner :
	public Part
{
public:
	TubeInner(std::string in_name, std::string in_comments, Material* in_material,
		double in_length, double in_diameterOuter, double in_thickness,
		bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride);

	~TubeInner();

	double length;
	double diameterOuter;
	double thickness;

private:
	
};
#endif // !_TUBE_INNER_H

