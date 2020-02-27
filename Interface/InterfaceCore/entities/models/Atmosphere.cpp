#include "Atmosphere.h"

Atmosphere::Atmosphere(bool in_internallyCalculated, std::string in_name, std::string in_comments,
	const std::vector<double>& in_height, const std::vector<double>& in_pressure, const std::vector<double>& in_temperature) {

	internallyCalculated = in_internallyCalculated;
	name = in_name;
	comments = in_comments;
	heightData = in_height;
	pressureData = in_pressure;
	temperatureData = in_temperature;
}

Atmosphere::~Atmosphere() {

}

double Atmosphere::temperature(const double& in_height) {
	return MathUtilities::interpolateLinear(heightData, temperatureData, in_height);
}

double Atmosphere::pressure(const double& in_height) {
	return MathUtilities::interpolateLinear(heightData, pressureData, in_height);
}

double Atmosphere::density(const double& in_height) {
	return pressure(in_height) / (R_SPECIFIC*temperature(in_height));
}

double Atmosphere::speedOfSound(const double& in_height) {
	return std::sqrt(GAMMA*R_SPECIFIC*temperature(in_height));
}

double Atmosphere::height(const double& in_pressure) {
	return MathUtilities::interpolateLinear(pressureData, heightData, in_pressure);
}


