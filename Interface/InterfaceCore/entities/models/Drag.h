#ifndef _DRAG_H
#define _DRAG_H

#include <cmath>
#include <iostream>
#include <vector>

#include "MathUtilities.h"

//need enum to select between internal drag model and external tabular data
enum class DragType {
	INTERNAL,
	EXTERNAL
};

class Drag
{
public:
	Drag(std::string in_name, std::string in_manufacturer, std::string in_comments,
		std::vector<double> in_dataMachNumber, std::vector<double> in_dataCd);
	~Drag();

	std::string name;
	double areaReferenceRocket, areaReferenceDrogue, areaReferenceMain;
	std::vector<double> dataMachNumber;
	std::vector<double> dataCdPowered;
	std::vector<double> dataCdUnpowered;
	std::vector<double> dataCdDrogue;
	std::vector<double> dataCdMain;
	std::string comments;

	double getDynamicPressure(const double& in_density, const double& in_velocity);

	double getCdPowered(const double& in_machNumber); //interpolate data for single mach number
	double getCdUnpowered(const double& in_machNumber); //interpolate data for single mach number
	double getCdDrogue(const double& in_machNumber); //interpolate data for single mach number
	double getCdMain(const double& in_machNumber); //interpolate data for single mach number

	double getDragPowered(const double& in_density, const double& in_velocity, const double& in_speedOfSound); //interpolate data for single drag
	double getDragUnpowered(const double& in_density, const double& in_velocity, const double& in_speedOfSound);
	double getDragDrogue(const double& in_density, const double& in_velocity, const double& in_speedOfSound);
	double getDragMain(const double& in_density, const double& in_velocity, const double& in_speedOfSound);


};
#endif

