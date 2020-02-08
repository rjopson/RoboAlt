
#ifndef _ATMOSPHERE_H
#define _ATMOSPHERE_H

#include <iostream>
#include <vector>
#include <math.h>

#define GRAVITY 9.80665 //m/s2
#define GAMMA 1.4
#define R_SPECIFIC 287.058

//#include "constants.h"

class Atmosphere
{
public:
	Atmosphere();
	~Atmosphere();
    
    //0:0km, 1:11km, 20km, 2:32km, 3:47km, 4:51km, 5:71km, 6:84.9im
    std::vector<double> p1; 
    std::vector<double> t1;
    std::vector<double> h1;
    std::vector<double> a;
    
    //height-->standard atmosphere calcs
    double temperature(const double& in_height);
    double pressure(const double& in_height);
    double density(const double& in_height);
    double speedOfSound(const double& in_height);    
    
    //pressure-->standard atmosphere calcs
    double height(const double& in_pressure);
    
private:
    int regionFromHeight(const double& in_height);
    int regionFromPressure(const double& in_pressure);
    
};
#endif


