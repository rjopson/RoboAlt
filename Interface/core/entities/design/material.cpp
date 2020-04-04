

#include "Material.h"

Material::Material(std::string name, const double& density) 
	: name_(name),
	  density_(density) {}


Material::~Material() {}

void Material::SetName(const std::string& name) {
	name_ = name;
}

void Material::SetDensity(const double& density) {
	density_ = density;
}

std::string Material::Name() const {
	return name_;
}

double Material::Density() const {
	return density_;
}

