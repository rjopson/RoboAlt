#include "Drag.h"



Drag::Drag(std::string in_name, std::string in_manufacturer, std::string in_comments,
	std::vector<double> in_dataMachNumber, std::vector<double> in_dataCd) {
}


Drag::~Drag() {
}

double Drag::getDynamicPressure(const double& in_density, const double& in_velocity) {
	return 0.5*in_density*std::pow(in_velocity, 2);
}

double Drag::getCdPowered(const double& in_machNumber) {
	return MathUtilities::interpolateLinear(dataMachNumber, dataCdPowered, in_machNumber);
}

double Drag::getCdUnpowered(const double& in_machNumber) {
	return MathUtilities::interpolateLinear(dataMachNumber, dataCdUnpowered, in_machNumber);
}

double Drag::getCdDrogue(const double& in_machNumber) {
	return MathUtilities::interpolateLinear(dataMachNumber, dataCdDrogue, in_machNumber);
}

double Drag::getCdMain(const double& in_machNumber) {
	return MathUtilities::interpolateLinear(dataMachNumber, dataCdMain, in_machNumber);
}

double Drag::getDragPowered(const double& in_density, const double& in_velocity, const double& in_speedOfSound) {
	double machNumber = in_velocity / in_speedOfSound;
	return getDynamicPressure(in_density, in_velocity)*areaReferenceRocket*getCdPowered(machNumber);
}

double Drag::getDragUnpowered(const double& in_density, const double& in_velocity, const double& in_speedOfSound) {
	double machNumber = in_velocity / in_speedOfSound;
	return getDynamicPressure(in_density, in_velocity)*areaReferenceRocket*getCdUnpowered(machNumber);
}

double Drag::getDragDrogue(const double& in_density, const double& in_velocity, const double& in_speedOfSound) {
	double machNumber = in_velocity / in_speedOfSound;
	return getDynamicPressure(in_density, in_velocity)*areaReferenceDrogue*getCdDrogue(machNumber);
}

double Drag::getDragMain(const double& in_density, const double& in_velocity, const double& in_speedOfSound) {
	double machNumber = in_velocity / in_speedOfSound;
	return getDynamicPressure(in_density, in_velocity)*areaReferenceMain*getCdMain(machNumber);
}
