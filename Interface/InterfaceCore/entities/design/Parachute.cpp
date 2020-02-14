#include "Parachute.h"

Parachute::Parachute(std::string in_name, std::string in_comments, Material* in_material, double in_diameter, 
	bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride) :

	Part(in_name, in_comments, in_material, 
		in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	type = PartType::PARACHUTE;
	diameter = in_diameter;
	
	dragList.push_back(new Drag("Internal Modal", DragType::PARACHUTE, "", ""));
	updateDragModel();
}

Parachute::~Parachute() {

}

double Parachute::area() {
	return PI * std::pow(diameter / 2.0, 2.0);
}

double Parachute::dragCoefficient() {
	return Aerodynamics::dragCoefficientParachute();
}

void Parachute::updateDragModel() {

	std::vector<double> mach{ 0.0, 0.8 };
	std::vector<double> cd{ dragCoefficient(), dragCoefficient() };

	dragList[0]->areaReference = area();
	dragList[0]->dataMachUnpowered = mach;
	dragList[0]->dataCdUnpowered = cd;
}
