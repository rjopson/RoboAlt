#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "rocket.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesEntity(Entity* entity);
py::dict AttributesRocket(Rocket* rocket) {
    return py::dict(**AttributesEntity(rocket));
}

void init_rocket(py::module& m) {
    py::class_<Rocket, Entity>(m, "Rocket")
        .def(py::init<const std::string&, const std::string&>(),
            "name"_a, "comments"_a)
        .def_property_readonly("configurations", &Rocket::Configurations, py::return_value_policy::reference_internal)
        .def_property_readonly("parts", &Rocket::Parts, py::return_value_policy::reference_internal)
        .def_property_readonly("motors", &Rocket::Motors, py::return_value_policy::reference_internal)
        .def_property_readonly("materials", &Rocket::Materials, py::return_value_policy::reference_internal)
        .def("attributes", &AttributesRocket);
}