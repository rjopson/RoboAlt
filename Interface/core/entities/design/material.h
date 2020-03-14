
#ifndef _MATERIAL_H
#define _MATERIAL_H

#include <iostream>

class Material
{
public:
	Material(std::string name, const double& density);
	~Material();

	std::string name_;
	double density_;

private:	
};
#endif

