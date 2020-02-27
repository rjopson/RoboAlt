
#ifndef _ATMOSPHERE_H
#define _ATMOSPHERE_H

#include <vector>

#include "MathUtilities.h"

#define GRAVITY 9.80665 //m/s2
#define GAMMA 1.4
#define R_SPECIFIC 287.058

class Atmosphere
{
public:
	Atmosphere(bool in_internallyCalculated, std::string in_name, std::string in_comments,
		const std::vector<double>& in_height, const std::vector<double>& in_pressure, const std::vector<double>& in_temperature);
	Atmosphere(std::string filePath);
	~Atmosphere();

	std::string name;
	std::string comments;

	bool internallyCalculated;

	std::vector<double> heightData;
	std::vector<double> pressureData;
	std::vector<double> temperatureData;

	//height-->standard atmosphere calcs
	double temperature(const double& in_height);
	double pressure(const double& in_height);
	double density(const double& in_height);
	double speedOfSound(const double& in_height);

	//pressure-->standard atmosphere calcs
	double height(const double& in_pressure);
};
#endif

