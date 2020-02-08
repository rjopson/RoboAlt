#include "Atmosphere.h"



Atmosphere::Atmosphere() {

	//0km, 11km, 20km, 32km, 47km, 51km, 71km, 84.9km
    p1.insert(p1.end(), {108900.0, 22632.0, 5474.9, 868.02, 110.91, 67.0, 3.9564, 0.3734});
	t1.insert(t1.end(), {292.15, 216.65, 216.65, 228.65, 270.65, 270.65, 214.65, 186.87});
	h1.insert(h1.end(), {-610.0, 11000.0, 20000.0, 32000.0, 47000.0, 51000.0, 71000.0, 84900.0});
	a.insert(a.end(), {-0.0065, 0.0, 0.001, 0.0028, 0.0, -0.0028, -0.002, 0.0});
}

Atmosphere::~Atmosphere() {
    
}

double Atmosphere::temperature(const double& in_height) {
    
	int region = Atmosphere::regionFromHeight(in_height);

	if (a[region] == 0.0) { //isothermal region
		return t1[region];
	}
	else { //gradient region
		return t1[region] + a[region] * (in_height - h1[region]);
	}
}

double Atmosphere::pressure(const double& in_height) {
    
	int region = Atmosphere::regionFromHeight(in_height);

	if (a[region] == 0.0) { //isothermal region
		return p1[region] * std::exp(-(GRAVITY / (R_SPECIFIC*Atmosphere::temperature(in_height)))*(in_height - h1[region]));
	}
	else { //gradient region
		return p1[region] * std::pow((Atmosphere::temperature(in_height) / t1[region]), (-GRAVITY / (a[region] * R_SPECIFIC)));
	}
}

double Atmosphere::density(const double& in_height) {
    
	return Atmosphere::pressure(in_height) / (R_SPECIFIC*Atmosphere::temperature(in_height));
}

double Atmosphere::speedOfSound(const double& in_height) {
    
	return std::sqrt(GAMMA*R_SPECIFIC*Atmosphere::temperature(in_height));
}

double Atmosphere::height(const double& in_pressure) {

	int region = Atmosphere::regionFromPressure(in_pressure);

	if (a[region] == 0.0) { //isothermal region
		return ((R_SPECIFIC*t1[region]) / GRAVITY)*std::log(in_pressure / p1[region]) + h1[region];
	}
	else { //gradient region
		return (t1[region] / (-a[region]))*(1 - pow(in_pressure / p1[region], (R_SPECIFIC*(-a[region])) / GRAVITY) + h1[region]);
	}
}

int Atmosphere::regionFromHeight(const double& in_height) {
    
    int i = 0;
    
	std::vector<double> h1_sub(h1.begin() + 1, h1.end()); //drop 1st value from heights

    for (auto height_test : h1_sub) {
        if (in_height < height_test) {
            return i;
        }
        i++;
    }
}

int Atmosphere::regionFromPressure(const double& in_pressure) {
    
    int i = 0;

	std::vector<double> p1_sub(p1.begin() + 1, p1.end()); //drop 1st value from pressures
    
    for (auto pressure_test : p1_sub) {
        if (in_pressure > pressure_test) {
            return i;
        }
        i++;
    }
}
















