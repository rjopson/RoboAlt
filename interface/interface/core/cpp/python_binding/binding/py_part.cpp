#include <pybind11/pybind11.h>
#include <pybind11/pytypes.h>

#include "part.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesEntity(Entity* entity);
py::dict AttributesPart(Part* part) {
    return py::dict(**AttributesEntity(part),
        "type"_a = part->Type(),
        "material"_a = part->AssignedMaterial()->Name(),
        "override_mass"_a = part->OverrideMass(),
        "override_mass_switch"_a = part->OverrideMassSwitch(),
        "override_cg"_a = part->OverrideCg(),
        "override_cg_switch"_a = part->OverrideCgSwitch());
}

class PyPart : public Part {
public:
    using Part::Part; // Inherit constructors
    double VolumeMaterial() const { PYBIND11_OVERLOAD_PURE(double, Part, VolumeMaterial,); }
};

void init_part(py::module& m) {

    py::enum_<PartType>(m, "PartType")
        .value("BULKHEAD", PartType::BULKHEAD)
        .value("FINS", PartType::FINS)
        .value("NOSECONE", PartType::NOSECONE)
        .value("PARACHUTE", PartType::PARACHUTE)
        .value("POINT_MASS", PartType::POINT_MASS)
        .value("TUBE_BODY", PartType::TUBE_BODY)
        .value("TUBE_INNER", PartType::TUBE_INNER);

    py::class_<Part, PyPart, Entity>(m, "Part", py::multiple_inheritance())
        .def(py::init<PartType, const std::string&, const std::string&, Material*, bool, const double&, bool, const double&>())
        .def_property("material", &Part::AssignedMaterial, &Part::SetMaterial, py::return_value_policy::reference_internal)
        .def_property("override_mass", &Part::OverrideMass, &Part::SetOverrideMass)
        .def_property("override_mass_switch", &Part::OverrideMassSwitch, &Part::SetOverrideMassSwitch)
        .def_property("override_cg", &Part::OverrideCg, &Part::SetOverrideCg)
        .def_property("override_cg_switch", &Part::OverrideCgSwitch, &Part::SetOverrideCgSwitch)
        .def_property_readonly("type", &Part::Type)
        .def_property_readonly("mass", &Part::Mass)
        .def("attributes", &AttributesPart);        
}   
    

