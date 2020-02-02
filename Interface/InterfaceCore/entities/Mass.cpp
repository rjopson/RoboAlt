#include "Mass.h"



Mass::Mass(std::string in_name, std::string in_comments, Material* in_material,
	double mass,
	bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride) :

	Part(in_name, in_comments, in_material, 
		in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	type = PartType::MASS;
}


Mass::~Mass() {

}
