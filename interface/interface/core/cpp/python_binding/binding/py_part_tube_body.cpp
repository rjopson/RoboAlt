#include <pybind11/pybind11.h>

#include "part_tube_body.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesPart(Part* part);
py::dict AttributesTubeBody(TubeBody* part) {
    return py::dict(**AttributesPart(part),
        "length"_a = part->Length(),
        "diameter_outer"_a = part->DiameterOuter(),
        "thickness"_a = part->Thickness());
}

void init_part_tube_body(py::module& m) {

    py::class_<TubeBody, Part>(m, "TubeBody")
        .def(py::init<const std::string&, const std::string&, Material*,
            const double&, const double&, const double&,
            bool, const double&, bool, const double&>(),
            "name"_a, "comments"_a, "material"_a,
            "length"_a, "diameter_outer"_a, "thickness"_a,
            "mass_override_switch"_a, "mass_override"_a, "cg_override_switch"_a, "cg_override"_a)
        .def_property("length", &TubeBody::Length, &TubeBody::SetLength)
        .def_property("diameter_outer", &TubeBody::DiameterOuter, &TubeBody::SetDiameterOuter)
        .def_property("thickness", &TubeBody::Thickness, &TubeBody::SetThickness)
        .def("attributes", &AttributesTubeBody);
}

