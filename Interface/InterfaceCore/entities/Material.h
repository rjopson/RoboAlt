
#ifndef _MATERIAL_H
#define _MATERIAL_H

#include <iostream>

class Material
{
public:
	Material(std::string in_name, double in_density);
	~Material();

	std::string name;
	double density;

private:	
};
#endif

