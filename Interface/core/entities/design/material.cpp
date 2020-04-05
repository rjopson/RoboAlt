

#include "Material.h"

unsigned int Material::id_counter_ = 0;

Material::Material(const std::string& name, const std::string& comments, const double& density)
	: Entity(name, comments),
	  density_(density) {

	id_counter_++;
	id_ = id_counter_;
}


Material::~Material() {}

void Material::SetDensity(const double& density) {
	density_ = density;
}

double Material::Density() const {
	return density_;
}

