#include "Fins.h"

Fins::Fins(std::string in_name, std::string in_comments, Material* in_material,
	FinShape* in_shape, FinCrossSection in_crossSection, int in_number, double in_thickness, double in_radiusFillet,
	bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride) :

	Part(in_name, in_comments, in_material, 
		in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	shape = in_shape;
	crossSection = in_crossSection;
	type = PartType::FINS;

	number = in_number;
	thickness = in_thickness;
	radiusFillet = in_radiusFillet;
}

Fins::~Fins() {

}

double Fins::areaSurface() {
	return ((double)number)*shape->areaPlanform() * 2.0;
}

double Fins::areaFrontal() {
	return ((double)number*shape->span()*thickness);
}

double Fins::volume() {
	return areaSurface()*thickness;
}

double Fins::length() {
	return shape->chordRoot();
}

double Fins::areaReference() {
	return Fins::areaFrontal();
}

double Fins::areaWet() {
	return Fins::areaSurface();
}

double Fins::dragCoefficient(const double& in_areaReference, const double& in_machNumber, const double& in_skinFrictionCoefficient) {
	return Fins::dragCoefficientFriction(in_skinFrictionCoefficient, in_areaReference) +
		Fins::dragCoefficientPressure(in_machNumber, in_areaReference) +
		Fins::dragCoefficientBase(in_machNumber, in_areaReference);
}

double Fins::dragCoefficientFriction(const double& in_skinFrictionCoefficient, const double& in_areaReference) {
	return Aerodynamics::dragCoefficientFrictionFins(in_skinFrictionCoefficient, Fins::areaWet(), in_areaReference);
}

double Fins::dragCoefficientPressure(const double& in_machNumber, const double& in_areaReference) {
	return Aerodynamics::dragCoefficientPressureFinsRounded(in_machNumber, shape->angleSweepLE(),
		Fins::areaFrontal(), in_areaReference);
}

double Fins::dragCoefficientBase(const double& in_machNumber, const double& in_areaReference) {
	return Aerodynamics::dragCoefficientBaseFins(in_machNumber, Fins::areaFrontal(), in_areaReference);
}

