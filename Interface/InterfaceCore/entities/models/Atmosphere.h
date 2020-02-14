
#ifndef _ATMOSPHERE_H
#define _ATMOSPHERE_H

#include <vector>

class Atmosphere
{
public:
	Atmosphere(std::string in_name, std::string in_comments, 
		std::vector<double> in_height, std::vector<double> in_pressure, std::vector<double> in_temperature);
	Atmosphere(std::string filePath);
	~Atmosphere();
};
#endif

