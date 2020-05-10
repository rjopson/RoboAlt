#include <pybind11/pybind11.h>

#include "material.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesEntity(Entity* entity);
py::dict AttributesMaterial(Material* material) {
    return py::dict(**AttributesEntity(material),
        "density"_a = material->Density());
}

void init_material(py::module& m) {
    py::class_<Material, Entity>(m, "Material")
        .def(py::init<const std::string&, const std::string&, const double&>(),
            "name"_a, "comments"_a, "density"_a)

        .def_property("density", &Material::Density, &Material::SetDensity)
        .def("attributes", &AttributesMaterial);
}