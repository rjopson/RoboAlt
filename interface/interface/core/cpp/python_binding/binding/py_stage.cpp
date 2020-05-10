#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "stage.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesEntity(Entity* entity);
py::dict AttributesStage(Stage* stage) {
    return py::dict(**AttributesEntity(stage),
        "surface_finish"_a = stage->AssignedSurfaceFinish(),
        "distance_overlap"_a = stage->DistanceOverlap(),
        "override_mass_empty"_a = stage->OverrideMassEmpty(),
        "override_mass_switch"_a = stage->OverrideMassSwitch());
}

void init_stage(py::module& m) {

    py::enum_<SurfaceFinish>(m, "SurfaceFinish")
        .value("ROUGH", SurfaceFinish::ROUGH)
        .value("UNFINISHED", SurfaceFinish::UNFINISHED)
        .value("PAINTED", SurfaceFinish::PAINTED)
        .value("POLISHED", SurfaceFinish::POLISHED);

    py::class_<Stage, Entity>(m, "Stage")
        .def(py::init<const std::string&, const std::string&, SurfaceFinish, const double&,
            bool, const double&, bool, const double&>(),
            "name"_a, "comments"_a, "surface_finish"_a, "overlap_distance"_a,
            "mass_override_switch"_a, "mass_override"_a, "cg_override_switch"_a, "cg_override"_a)
        .def_property("surface_finish", &Stage::AssignedSurfaceFinish, &Stage::SetSurfaceFinish)
        .def_property("distance_overlap", &Stage::DistanceOverlap, &Stage::SetDistanceOverlap)
        .def_property("override_mass_empty", &Stage::OverrideMassEmpty, &Stage::SetOverrideMassEmpty)
        .def_property("override_mass_switch", &Stage::OverrideMassSwitch, &Stage::SetOverrideMassSwitch)
        .def_property_readonly("part_root", &Stage::InstanceRoot, py::return_value_policy::reference_internal)
        .def("mass_empty", &Stage::MassEmpty, "include_stages_above"_a)
        .def("area_reference", &Stage::AreaReference, "include_stages_above"_a)
        .def("length", &Stage::Length, "include_stages_above"_a)
        .def("instance_list", &Stage::InstanceList, "include_stages_above"_a, "recursive"_a, py::return_value_policy::reference_internal)
        .def("attributes", &AttributesStage);
}
