
#ifndef _BULKHEAD_H
#define _BULKHEAD_H

#include "Part.h"

class Bulkhead :
	public Part
{
public:
	Bulkhead(std::string in_name, std::string in_comments, Material* in_material,
		double in_diameter, double in_thickness, 
		bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride);

	~Bulkhead();

	double diameter;
	double thickness;

private:
	

};
#endif // !_BULKHEAD_H

