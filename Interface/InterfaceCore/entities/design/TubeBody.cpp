

#include "tubeBody.h"

TubeBody::TubeBody(std::string in_name, std::string in_comments, Material* in_material,
	double in_length, double in_diameterOuter, double in_thickness, 
	bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride) : 
	
	Part(in_name, in_comments, in_material, 
		in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	type = PartType::TUBE_BODY;

	length = in_length;
	diameterOuter = in_diameterOuter;
	thickness = in_thickness;	
}

TubeBody::~TubeBody() {

}

double TubeBody::diameterInner() {
	return diameterOuter - 2.0 * thickness;
}

double TubeBody::areaSurface() {
	return diameterOuter*PI*length;
}

double TubeBody::volumeMaterial() {
	return areaSurface()*thickness;
}

double TubeBody::volumeInterior() {
	double radius = diameterOuter / 2.0;
	return length*PI*std::pow(radius, 2.0);
}

double TubeBody::areaPlanform() {
	return diameterOuter*length;
}

double TubeBody::diameterAirflow() {
	return diameterOuter;
}

double TubeBody::lengthAirflow() {
	return length;
}

double TubeBody::areaReference() {
	double radius = diameterOuter / 2.0;
	return PI * std::pow(radius, 2.0);
}

double TubeBody::areaWet() {
	return TubeBody::areaSurface();
}

double TubeBody::dragCoefficient(const double& in_areaReference, const double& in_finenessRocket, const double& in_machNumber, const double& in_skinFrictionCoefficient, const bool& in_aftMostPart, const double& in_areaThrusting) {
	return TubeBody::dragCoefficientFriction(in_skinFrictionCoefficient, in_areaReference, in_finenessRocket) +
		TubeBody::dragCoefficientPressure(in_machNumber, in_areaReference) +
		TubeBody::dragCoefficientBase(in_aftMostPart, in_machNumber, in_areaThrusting, in_areaReference);
}

double TubeBody::dragCoefficientFriction(const double& in_skinFrictionCoefficient, const double& in_areaReference, const double& in_finenessRocket) {
	return Aerodynamics::dragCoefficientFrictionBody(in_skinFrictionCoefficient, in_finenessRocket, TubeBody::areaWet(), in_areaReference);
}

double TubeBody::dragCoefficientBase(const bool& in_aftMostPart, const double& in_machNumber, const double& in_areaThrusting, const double& in_areaReference) {
	return Aerodynamics::dragCoefficientBase(in_aftMostPart, in_machNumber, TubeBody::areaReference(), in_areaThrusting, in_areaReference);
}
