#ifndef _MOTOR_H
#define _MOTOR_H

#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "entity.h"
#include "math_utilities.h"
#include "parse.h"

class Motor : public Entity {
  public:
    static constexpr double kPi = 3.141592653589793;

	Motor(const std::string& name, const std::string& comments, const std::string& manufacturer,
		const double& diameter, const double& length, const std::vector<double>& delay, const double& mass_propellant, const double& mass_total,
		const std::vector<double>& data_time, const std::vector<double>& data_thrust);
	Motor(const std::string& file_path);
	~Motor();

    //User Input
    void SetManufacturer(const std::string& manufacturer);
    void SetDiameter(const double& diameter);
    void SetLength(const double& length);
    void SetDelay(const std::vector<double>& delay);
    void SetMassPropellant(const double& mass_propellant);
    void SetMassTotal(const double& mass_total);   
    void SetDataTime(const std::vector<double>& time);
    void SetDataThrust(const std::vector<double>& thrust);

    //Datanames
    std::string Manufacturer() const;
    double Diameter() const;
    double Length() const;
    std::vector<double> Delay() const;
    double MassPropellant() const;
    double MassTotal() const;
    std::vector<double> DataTime() const;
    std::vector<double> DataThrust() const;
    double MassCase() const;
	double GetMass(const double& time) const; //interpolate data for single mass value
	double GetThrust(const double& time) const; //interpolate data for single thrust value
	double Area() const;
	double Isp() const;
	double ImpulseTotal() const;
	std::vector<double> Impulse() const;
	bool CurrentlyThrusting(const double& time) const; 
	void Print() const;

  private:
    void Parse(const std::string& file_path);
    std::string manufacturer_;
    double diameter_;
    double length_;
    std::vector<double> delay_;
    double mass_propellant_;
    double mass_total_;    
    std::vector<double> data_time_;
    std::vector<double> data_thrust_;    
}; 
#endif


