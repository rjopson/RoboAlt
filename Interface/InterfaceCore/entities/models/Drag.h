#ifndef _DRAG_H
#define _DRAG_H

#include <cmath>
#include <functional>
#include <iostream>
#include <vector>

#include "MathUtilities.h"

//need enum to select between internal drag model and external tabular data
enum class DragType {
	ROCKET,
	PARACHUTE
};

class Drag
{
public:
	Drag() {}
	Drag(bool in_internallyCalculated, std::string in_name, DragType in_type, std::string in_manufacturer, std::string in_comments);
	~Drag();

	std::string name;
	bool internallyCalculated;
	std::string manufacturer;
	std::string comments;
	DragType type;
	double areaReference;
	std::vector<double> dataMachUnpowered;
	std::vector<double> dataCdUnpowered;
	std::vector<double> dataMachPowered;
	std::vector<double> dataCdPowered;	

	double getDynamicPressure(const double& in_density, const double& in_velocity);
	double getCd(bool powered, const double& in_machNumber); //interpolate data for single mach number
	double getDrag(bool powered, const double& in_density, const double& in_velocity, const double& in_speedOfSound); //interpolate data for single drag
};
#endif

