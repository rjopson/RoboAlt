#ifndef _MOTOR_H
#define _MOTOR_H

#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "math_utilities.h"
#include "parse.h"

class Motor
{
public:
    static constexpr double kPi = 3.141592653589793;

	Motor(std::string name, std::string manufacturer, std::string comments,
		const double& diameter, const double& length, std::vector<double> delay, const double& mass_propellant, const double& mass_total,
		const std::vector<double>& data_time, const std::vector<double>& data_thrust);
	Motor(std::string file_path);
	~Motor();

	double GetMass(const double& time); //interpolate data for single mass value
	double GetThrust(const double& time); //interpolate data for single thrust value
	double Area();
	double Isp();
	double ImpulseTotal();
	std::vector<double> Impulse();
	void Print();

    std::string name_;
    std::string manufacturer_;
    std::string comments_;
    double diameter_;
    double length_;
    std::vector<double> delay_;
    double mass_propellant_;
    double mass_total_;    
    std::vector<double> data_time_;
    std::vector<double> data_thrust_;
    
}; 
#endif


