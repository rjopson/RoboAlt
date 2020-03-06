
#ifndef _ATMOSPHERE_ISA_H
#define _ATMOSPHERE_ISA_H

#include <iostream>
#include <vector>
#include <math.h>

#include "Atmosphere.h"

#define GRAVITY 9.80665 //m/s2
#define GAMMA 1.4
#define R_SPECIFIC 287.058

#define heightMinimum -610
#define heightMaximum 84900
#define heightStep 10

class Atmosphere_ISA
{
public:
	Atmosphere_ISA();
	~Atmosphere_ISA();
   
    //-610m, 1:11km, 2:20km, 3:32km, 4:47km, 5:51km, 6:71km, 7:84.9im
    std::vector<double> p1; 
    std::vector<double> t1;
    std::vector<double> h1;
    std::vector<double> a;
    
    //height-->standard atmosphere calcs
    double temperature(const double& in_height);
    double pressure(const double& in_height);
    double density(const double& in_height);
    double speedOfSound(const double& in_height);    

	//returns generic atmosphere class
	Atmosphere getModel();
    
    //pressure-->standard atmosphere calcs
    double height(const double& in_pressure);
    
private:
    int regionFromHeight(const double& in_height);
    int regionFromPressure(const double& in_pressure);
    
};
#endif


