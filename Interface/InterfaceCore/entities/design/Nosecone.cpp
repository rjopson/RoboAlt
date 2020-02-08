#include "Nosecone.h"



Nosecone::Nosecone(std::string in_name, std::string in_comments, Material* in_material,
	NoseconeType in_noseconeType,
	double in_shapeParameter, double in_lengthNose, double in_thickness, double in_diameterOuter, double in_lengthBase,
	double in_thicknessShoulder, double in_lengthShoulder, double in_diameterShoulder,
	bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride) :

	Part(in_name, in_comments, in_material, 
		in_massOverrideSwitch, in_massOverride, in_cgOverrideSwitch, in_cgOverride) {

	noseconeType = in_noseconeType;
	type = PartType::NOSECONE;

	shapeParameter = in_shapeParameter;
	lengthNose = in_lengthNose;
	thickness = in_thickness;
	diameterOuter = in_diameterOuter;
	lengthBase = in_lengthBase;
	thicknessShoulder = in_thicknessShoulder;
	lengthShoulder = in_lengthShoulder;
	diameterShoulder = in_diameterShoulder;
}

Nosecone::~Nosecone() {

}

double Nosecone::radius() {
	return diameterOuter / 2.0;
}

double Nosecone::length() {
	return lengthNose + lengthBase;
}

double Nosecone::areaSurface() {
	
	double base = lengthBase*PI*diameterOuter;

	//approximate all surface areas using conical function
	double nose = PI * lengthNose*radius()*std::sqrt(std::pow(radius() / lengthNose, 2.0) + 1);

	return base + nose;
}

double Nosecone::areaPlanform() {

	//approixmate all planform areas using conical function
	return diameterOuter*length()*(2.0 / 3.0);
}

double Nosecone::areaForward() {
	return 0.0;
}

double Nosecone::areaAft() {
	return PI * std::pow(radius(), 2.0);
}

double Nosecone::volumeMaterial() {
	return areaSurface()*thickness;
}

double Nosecone::volumeInterior() {

}

double Nosecone::finenessRatio() {
	return lengthNose / diameterOuter;
}

double Nosecone::curve_vonKarmen(double x) {

}

double Nosecone::curve_Conic(double x) {
	return x * (radius() / lengthNose);
}

double Nosecone::diameterAirflow() {
	return diameterOuter;
}

double Nosecone::lengthAirflow() {
	return length();
}

double Nosecone::areaReference() {
	return std::max(Nosecone::areaForward(), Nosecone::areaAft());
}

double Nosecone::areaWet() {
	return Nosecone::areaSurface();
}

double Nosecone::dragCoefficient(const double& in_areaReference, const double& in_finenessRocket, const double& in_machNumber, const double& in_skinFrictionCoefficient, const bool& in_aftMostPart, const double& in_areaThrusting) {
	return Nosecone::dragCoefficientFriction(in_skinFrictionCoefficient, in_areaReference, in_finenessRocket) + 
		Nosecone::dragCoefficientPressure(in_machNumber, in_areaReference) +
		Nosecone::dragCoefficientBase(in_aftMostPart, in_machNumber, in_areaThrusting, in_areaReference);
}

double Nosecone::dragCoefficientFriction(const double& in_skinFrictionCoefficient, const double& in_areaReference, const double& in_finenessRocket) {
	return Aerodynamics::dragCoefficientFrictionBody(in_skinFrictionCoefficient, in_finenessRocket, Nosecone::areaWet(), in_areaReference);
}

double Nosecone::dragCoefficientPressure(const double& in_machNumber, const double& in_areaReference) {
	return Aerodynamics::dragCoefficientPressureNose(in_machNumber, 
		Nosecone::finenessRatio(), noseconeType, Nosecone::areaReference(), in_areaReference);
}

double Nosecone::dragCoefficientBase(const bool& in_aftMostPart, const double& in_machNumber, const double& in_areaThrusting, const double& in_areaReference) {
	return Aerodynamics::dragCoefficientBase(in_aftMostPart, in_machNumber, Nosecone::areaReference(), in_areaThrusting, in_areaReference);
}


