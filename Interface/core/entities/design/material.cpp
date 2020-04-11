#include "Material.h"

Material::Material(const std::string& name, const std::string& comments, const double& density)
	: Entity(name, comments),
	density_(density) {

}


Material::~Material() {}

void Material::SetDensity(const double& density) {
	density_ = density;
}

double Material::Density() const {
	return density_;
}

