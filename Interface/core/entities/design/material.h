
#ifndef _MATERIAL_H
#define _MATERIAL_H

#include <iostream>

class Material
{
  public:
	Material(std::string name, const double& density);
	~Material();

	void SetName(const std::string& name);
	void SetDensity(const double& density);
	std::string Name() const;
	double Density() const;

  private:
	std::string name_;
	double density_;
};
#endif

