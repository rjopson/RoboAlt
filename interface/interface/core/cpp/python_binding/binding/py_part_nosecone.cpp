#include <pybind11/pybind11.h>

#include "aerodynamics.h"
#include "part_nosecone.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesPart(Part* part);
py::dict AttributesNosecone(Nosecone* part) {
    return py::dict(**AttributesPart(part),
        "nosecone_type"_a = part->NoseType(),
        "shape_parameter"_a = part->ShapeParameter(),
        "length_nose"_a = part->LengthNose(),
        "length_base"_a = part->LengthBase(),
        "length_shoulder"_a = part->LengthShoulder(),
        "thickness"_a = part->Thickness(),
        "diameter_outer"_a = part->DiameterOuter(),
        "diameter_shoulder"_a = part->DiameterShoulder());;
}

void init_part_nosecone(py::module& m) {

    py::enum_<NoseconeType>(m, "NoseconeType")
        .value("VON_KARMEN", NoseconeType::VON_KARMEN)
        .value("CONICAL", NoseconeType::CONICAL)
        .value("OGIVE", NoseconeType::OGIVE)
        .value("HAACK", NoseconeType::HAACK);

    py::class_<Nosecone, Part>(m, "Nosecone")
        .def(py::init<const std::string&, const std::string&, Material*,
            NoseconeType, const double&,
            const double, const double&, const double&, const double&, const double&, const double&,
            bool, const double&, bool, const double&>(),
            "name"_a, "comments"_a, "material"_a,
            "nosecone_type"_a, "shape_parameter"_a, "length_nose"_a, "length_base"_a, "length_shoulder"_a,
            "thickness"_a, "diameter_outer"_a, "diameter_shoulder"_a,
            "mass_override_switch"_a, "mass_override"_a, "cg_override_switch"_a, "cg_override"_a)
        .def_property("nosecone_type", &Nosecone::NoseType, &Nosecone::SetNoseType)
        .def_property("shape_parameter", &Nosecone::ShapeParameter, &Nosecone::SetShapeParameter)
        .def_property("length_nose", &Nosecone::LengthNose, &Nosecone::SetLengthNose)
        .def_property("length_base", &Nosecone::LengthBase, &Nosecone::SetLengthBase)
        .def_property("length_shoulder", &Nosecone::LengthShoulder, &Nosecone::SetLengthShoulder)
        .def_property("thickness", &Nosecone::Thickness, &Nosecone::SetThickness)
        .def_property("diameter_outer", &Nosecone::DiameterOuter, &Nosecone::SetDiameterOuter)
        .def_property("diameter_shoulder", &Nosecone::DiameterShoulder, &Nosecone::SetDiameterShoulder)
        .def_property_readonly("radius", &Nosecone::Radius)
        .def_property_readonly("length", &Nosecone::Length)
        .def("attributes", &AttributesNosecone);
}