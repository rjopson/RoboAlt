#include <pybind11/pybind11.h>

#include "part_bulkhead.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesPart(Part* part);
py::dict AttributesBulkhead(Bulkhead* part) {
    return py::dict(**AttributesPart(part),
        "diameter"_a = part->Diameter(),
        "thickness"_a = part->Thickness());
}

void init_part_bulkhead(py::module& m) {

    py::class_<Bulkhead, Part>(m, "Bulkhead")
        .def(py::init<const std::string&, const std::string&, Material*,
            const double&, const double&,
            bool, const double&, bool, const double&>(),
            "name"_a, "comments"_a, "material"_a, 
            "diameter"_a, "thickness"_a,
            "mass_override_switch"_a, "mass_override"_a, "cg_override_switch"_a, "cg_override"_a)

        .def_property("diameter", &Bulkhead::Diameter, &Bulkhead::SetDiameter)
        .def_property("thickness", &Bulkhead::Thickness, &Bulkhead::SetThickness)        
        .def("attributes", &AttributesBulkhead);
}




