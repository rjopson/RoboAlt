#include "Parachute.h"

Parachute::Parachute(std::string in_name, std::string in_comments, Material* in_material, double in_diameter, double in_thickness,
	bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride) :

	Part(in_name, in_comments, in_material, 
		in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	type = PartType::PARACHUTE;
	diameter = in_diameter;
	thickness = in_thickness;
}

Parachute::~Parachute() {

}

double Parachute::area() {
	return PI * std::pow(diameter / 2.0, 2.0);
}

double Parachute::dragCoefficient() {
	return Aerodynamics::dragCoefficientParachute();
}

double Parachute::volumeMaterial() {
	return area()*thickness;
}

Drag Parachute::getDragModel() {

	std::vector<double> mach{ 0.0, 0.8 };
	std::vector<double> cd{ dragCoefficient(), dragCoefficient() };

	Drag drag(true, "Internal Model", DragType::PARACHUTE, "", "");

	drag.areaReference = area();
	drag.dataMachUnpowered = mach;
	drag.dataCdUnpowered = cd;

	return drag;
}
