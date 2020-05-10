#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "part_instance.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesEntity(Entity* entity);
py::dict AttributesPartInstance(PartInstance* instance) {
    return py::dict(**AttributesEntity(instance),
        "part"_a = instance->AssignedPart()->Name(),
        "position_type"_a = instance->PositionType(),
        "position_from"_a = instance->PositionFrom());
}

void init_part_instance(py::module& m) {

    py::enum_<PartPosition>(m, "PartPosition")
        .value("FOREWARD", PartPosition::FOREWARD)
        .value("AFT", PartPosition::AFT);

    py::class_<PartInstance, Entity>(m, "PartInstance")
        .def(py::init<const std::string&, Part*, PartInstance*, PartPosition, const double&>(),
            "name"_a, "part"_a, "parent"_a, "position_type"_a, "position_from"_a)
        .def_property_readonly("part", &PartInstance::AssignedPart, py::return_value_policy::reference_internal)
        .def_property("position_type", &PartInstance::PositionType, &PartInstance::SetPositionType)
        .def_property("position_from", &PartInstance::PositionFrom, &PartInstance::SetPositionFrom)
        .def_property_readonly("parent", &PartInstance::Parent)
        .def("children", &PartInstance::Children, "recursive"_a, py::return_value_policy::reference_internal)
        .def("attributes", &AttributesPartInstance);
}
