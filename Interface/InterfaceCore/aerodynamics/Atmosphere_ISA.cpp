#include "Atmosphere_ISA.h"

Atmosphere_ISA::Atmosphere_ISA() {

	//-610m, 11km, 20km, 32km, 47km, 51km, 71km, 84.9km
    p1.insert(p1.end(), {108900.0, 22632.0, 5474.9, 868.02, 110.91, 67.0, 3.9564, 0.3734});
	t1.insert(t1.end(), {292.15, 216.65, 216.65, 228.65, 270.65, 270.65, 214.65, 186.87});
	h1.insert(h1.end(), {-610.0, 11000.0, 20000.0, 32000.0, 47000.0, 51000.0, 71000.0, 84900.0});
	a.insert(a.end(), {-0.0065, 0.0, 0.001, 0.0028, 0.0, -0.0028, -0.002, 0.0});	
}

Atmosphere_ISA::~Atmosphere_ISA() {
    
}

double Atmosphere_ISA::temperature(const double& in_height) {
    
	int region = regionFromHeight(in_height);

	if (a[region] == 0.0) { //isothermal region
		return t1[region];
	}
	else { //gradient region
		return t1[region] + a[region] * (in_height - h1[region]);
	}
}

double Atmosphere_ISA::pressure(const double& in_height) {
    
	int region = regionFromHeight(in_height);

	if (a[region] == 0.0) { //isothermal region
		return p1[region] * std::exp(-(GRAVITY / (R_SPECIFIC*temperature(in_height)))*(in_height - h1[region]));
	}
	else { //gradient region
		return p1[region] * std::pow((temperature(in_height) / t1[region]), (-GRAVITY / (a[region] * R_SPECIFIC)));
	}
}

double Atmosphere_ISA::density(const double& in_height) {
    
	return pressure(in_height) / (R_SPECIFIC*temperature(in_height));
}

double Atmosphere_ISA::speedOfSound(const double& in_height) {
    
	return std::sqrt(GAMMA*R_SPECIFIC*temperature(in_height));
}

double Atmosphere_ISA::height(const double& in_pressure) {

	int region = regionFromPressure(in_pressure);

	if (a[region] == 0.0) { //isothermal region
		return ((R_SPECIFIC*t1[region]) / GRAVITY)*std::log(in_pressure / p1[region]) + h1[region];
	}
	else { //gradient region
		return (t1[region] / (-a[region]))*(1 - pow(in_pressure / p1[region], (R_SPECIFIC*(-a[region])) / GRAVITY) + h1[region]);
	}
}

//returns vector of {height, pressure, temperature}
Atmosphere Atmosphere_ISA::getModel() {

	int iterations = (heightMaximum - heightMinimum) / heightStep;

	std::vector<double> heightData(iterations);
	std::vector<double> pressureData(iterations);
	std::vector<double> temperatureData(iterations);
	
	for (int i = 0; i != iterations; i++) {

		double heightCurrent = (double)(i*heightStep + heightMinimum);		
		heightData[i] = heightCurrent;
		pressureData[i] = pressure(heightCurrent);
		temperatureData[i] = temperature(heightCurrent);
	}

	return Atmosphere(true, "Internal model", "", heightData, pressureData, temperatureData);
}

int Atmosphere_ISA::regionFromHeight(const double& in_height) {
    
    int i = 0;
    
	std::vector<double> h1_sub(h1.begin() + 1, h1.end()); //drop 1st value from heights

    for (auto height_test : h1_sub) {
        if (in_height < height_test) {
            return i;
        }
        i++;
    }
}

int Atmosphere_ISA::regionFromPressure(const double& in_pressure) {
    
    int i = 0;

	std::vector<double> p1_sub(p1.begin() + 1, p1.end()); //drop 1st value from pressures
    
    for (auto pressure_test : p1_sub) {
        if (in_pressure > pressure_test) {
            return i;
        }
        i++;
    }
}
















