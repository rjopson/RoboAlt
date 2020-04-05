
#ifndef _MATERIAL_H
#define _MATERIAL_H

#include <iostream>

#include "entity.h"

class Material : public Entity {
  public:
	Material(const std::string& name, const std::string& comments, const double& density);
	~Material();

	void SetDensity(const double& density);
	double Density() const;

  private:
	static unsigned int id_counter_;

	double density_;
};
#endif

