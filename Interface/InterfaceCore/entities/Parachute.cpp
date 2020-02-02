#include "Parachute.h"

Parachute::Parachute(std::string in_name, std::string in_comments, Material* in_material,
	double in_diameter, double in_dragCoefficient,
	bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride) :

	Part(in_name, in_comments, in_material, 
		in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	type = PartType::PARACHUTE;

	diameter = in_diameter;
	dragCoefficient = in_dragCoefficient;
}

Parachute::~Parachute() {

}

double Parachute::area() {
	return PI * std::pow(diameter / 2.0, 2.0);
}
