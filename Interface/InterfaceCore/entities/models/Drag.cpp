#include "Drag.h"



Drag::Drag(std::string in_name, DragType in_type, std::string in_manufacturer, std::string in_comments) {

	name = in_name;
	manufacturer = in_manufacturer;
	comments = in_comments;
	type = in_type;
}

Drag::~Drag() {
}

double Drag::getDynamicPressure(const double& in_density, const double& in_velocity) {
	return 0.5*in_density*std::pow(in_velocity, 2);
}

double Drag::getCd(bool powered, const double& in_machNumber) {
	if (powered) {
		return MathUtilities::interpolateLinear(dataMachPowered, dataCdPowered, in_machNumber);
	}
	else {
		return MathUtilities::interpolateLinear(dataMachUnpowered, dataCdUnpowered, in_machNumber);
	}
}

double Drag::getDrag(bool powered, const double& in_density, const double& in_velocity, const double& in_speedOfSound) {
	double machNumber = in_velocity / in_speedOfSound;
	return getDynamicPressure(in_density, in_velocity)*areaReference*getCd(powered, machNumber);
}