
#ifndef _MATERIAL_H
#define _MATERIAL_H

#include <iostream>

#include "entity.h"

class Material : public Entity {
  public:
	Material(const std::string& name, const std::string& comments, const double& density);
	~Material();

	//Values
	void SetDensity(const double& density);

	//Datanames
	double Density() const;

  private:
	double density_;
};
#endif

