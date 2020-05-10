#include <pybind11/pybind11.h>

#include "part_parachute.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesPart(Part* part);
py::dict AttributesParachute(Parachute* part) {
    return py::dict(**AttributesPart(part),
        "thickness"_a = part->Thickness(),
        "diameter"_a = part->Diameter());
}

void init_part_parachute(py::module& m) {

    py::class_<Parachute, Part>(m, "Parachute")
        .def(py::init<const std::string&, const std::string&, Material*,
            const double&, const double&,
            bool, const double&, bool, const double&>(),
            "name"_a, "comments"_a, "material"_a,
            "diameter"_a, "thickness"_a,
            "mass_override_switch"_a, "mass_override"_a, "cg_override_switch"_a, "cg_override"_a)
        .def_property("thickness", &Parachute::Thickness, &Parachute::SetThickness)
        .def_property("diameter", &Parachute::Diameter, &Parachute::SetDiameter)
        .def_property("area", &Parachute::Area, &Parachute::SetArea)
        .def("attributes", &AttributesParachute);
}
