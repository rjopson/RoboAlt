#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "configuration.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesEntity(Entity* entity);
py::dict AttributesConfiguration(Configuration* configuration) {
    return py::dict(**AttributesEntity(configuration));
}

void init_configuration(py::module& m) {

    py::class_<Configuration, Entity>(m, "Configuration")
        .def(py::init<const std::string&, const std::string&>(),
            "name"_a, "comments"_a)
        .def_property_readonly("stages", &Configuration::Stages, py::return_value_policy::reference_internal)
        .def_property_readonly("simulations", &Configuration::Simulations, py::return_value_policy::reference_internal)
        .def_property_readonly("flights", &Configuration::Flights, py::return_value_policy::reference_internal)
        .def("attributes", &AttributesConfiguration);
}