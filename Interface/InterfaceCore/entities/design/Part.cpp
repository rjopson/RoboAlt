#include "Part.h"

Part::Part(std::string in_name, std::string in_comments, Material* in_material, 
	bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride) :

	mass(0.0, in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	name = in_name;
	material = in_material;
	comments = in_comments;
}

Part::~Part() {

}

double Part::diameterAirflow() {
	return 0.0;
}

double Part::lengthAirflow() {
	return 0.0;
}

double Part::areaReference() {
	return 0.0;
}

double Part::areaWet() {
	return 0.0;
}

double Part::dragCoefficient(const double& in_areaReference, const double& in_finenessRocket, const double& in_machNumber, const double& in_skinFrictionCoefficient, const bool& in_aftMostPart, const double& in_areaThrusting) {
	return 0.0;
}

double Part::dragCoefficientFriction(const double& in_skinFrictionCoefficient, const double& in_areaReference, const double& in_finenessRocket) {
	return 0.0;
}

double Part::dragCoefficientPressure(const double& in_machNumber, const double& in_areaReference) {
	return 0.0;
}

double Part::dragCoefficientBase(const bool& in_aftMostPart, const double& in_machNumber, const double& in_areaThrusting, const double& in_areaReference) {
	return 0.0;
}
