#include "TubeInner.h"

TubeInner::TubeInner(std::string in_name, std::string in_comments, Material* in_material,
	double in_length, double in_diameterOuter, double in_thickness,
	bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride) :

	Part(in_name, in_comments, in_material, 
		in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	type = PartType::TUBE_INNER;

	length = in_length;
	diameterOuter = in_diameterOuter;
	thickness = in_thickness;
}

TubeInner::~TubeInner() {

}
