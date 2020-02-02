#include "Bulkhead.h"

Bulkhead::Bulkhead(std::string in_name, std::string in_comments, Material* in_material,
	double in_diameter, double in_thickness,
	bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride) :

	Part(in_name, in_comments, in_material,
		in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	diameter = in_diameter;
	thickness = in_thickness;
	type = PartType::BULKHEAD;
}

Bulkhead::~Bulkhead() {

}
