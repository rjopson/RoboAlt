#include <pybind11/pybind11.h>

#include "aerodynamics.h"
#include "fin_shape.h"
#include "part_fins.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesPart(Part* part);
py::dict AttributesFins(Fins* part) {
    return py::dict(**AttributesPart(part),
        "cross_section"_a = part->CrossSection(),
        "number"_a = part->Number(),
        "thickness"_a = part->Thickness(),
        "radius_fillet"_a = part->RadiusFillet());
}

class PyFinShape : public FinShape {
public:
    using FinShape::FinShape; // Inherit constructors
    double ChordRoot() const { PYBIND11_OVERLOAD_PURE(double, FinShape, ChordRoot, ); }
    double ChordTip() const { PYBIND11_OVERLOAD_PURE(double, FinShape, ChordTip, ); }
    double Span() const { PYBIND11_OVERLOAD_PURE(double, FinShape, Span, ); }
    double LengthSweep() const { PYBIND11_OVERLOAD_PURE(double, FinShape, LengthSweep, ); }
    double AreaPlanform() const { PYBIND11_OVERLOAD_PURE(double, FinShape, AreaPlanform, ); }
    double Mac() const { PYBIND11_OVERLOAD_PURE(double, FinShape, Mac, ); }
    double MacY() const { PYBIND11_OVERLOAD_PURE(double, FinShape, MacY, ); }
    double MacLE_FromRoot_LE() const { PYBIND11_OVERLOAD_PURE(double, FinShape, MacLE_FromRoot_LE, ); }
    double AngleSweepMid() const { PYBIND11_OVERLOAD_PURE(double, FinShape, AngleSweepMid, ); }
    double AngleSweepLE() const { PYBIND11_OVERLOAD_PURE(double, FinShape, AngleSweepLE, ); }
    double AspectRatio() const { PYBIND11_OVERLOAD_PURE(double, FinShape, AspectRatio, ); }
};

class PyFinShapeTrapezoidal : public FinShapeTrapezoidal {
public:
    using FinShapeTrapezoidal::FinShapeTrapezoidal; // Inherit constructors
    double ChordRoot() const { PYBIND11_OVERLOAD(double, FinShapeTrapezoidal, ChordRoot, ); }
    double ChordTip() const { PYBIND11_OVERLOAD(double, FinShapeTrapezoidal, ChordTip, ); }
    double Span() const { PYBIND11_OVERLOAD(double, FinShapeTrapezoidal, Span, ); }
    double LengthSweep() const { PYBIND11_OVERLOAD(double, FinShapeTrapezoidal, LengthSweep, ); }
    double AreaPlanform() const { PYBIND11_OVERLOAD(double, FinShapeTrapezoidal, AreaPlanform, ); }
    double Mac() const { PYBIND11_OVERLOAD(double, FinShapeTrapezoidal, Mac, ); }
    double MacY() const { PYBIND11_OVERLOAD(double, FinShapeTrapezoidal, MacY, ); }
    double MacLE_FromRoot_LE() const { PYBIND11_OVERLOAD(double, FinShapeTrapezoidal, MacLE_FromRoot_LE, ); }
    double AngleSweepMid() const { PYBIND11_OVERLOAD(double, FinShapeTrapezoidal, AngleSweepMid, ); }
    double AngleSweepLE() const { PYBIND11_OVERLOAD(double, FinShapeTrapezoidal, AngleSweepLE, ); }
    double AspectRatio() const { PYBIND11_OVERLOAD(double, FinShapeTrapezoidal, AspectRatio, ); }
};

void init_part_fins(py::module& m) {

    py::enum_<FinShapeType>(m, "FinShapeType")
        .value("TRAPEZOIDAL", FinShapeType::TRAPEZOIDAL);

    py::class_<FinShape, PyFinShape>(m, "FinShape")
        .def(py::init<>())
        .def_property_readonly("type", &FinShape::AssignedFinShapeType)
        .def_property_readonly("chord_root", &FinShape::ChordRoot)
        .def_property_readonly("chord_tip", &FinShape::ChordTip)
        .def_property_readonly("span", &FinShape::Span)
        .def_property_readonly("length_sweep", &FinShape::LengthSweep)
        .def_property_readonly("area_planform", &FinShape::AreaPlanform)
        .def_property_readonly("mac", &FinShape::Mac)
        .def_property_readonly("angle_sweep", &FinShape::AngleSweepLE)
        .def_property_readonly("aspect_ratio", &FinShape::AspectRatio);

    py::class_<FinShapeTrapezoidal, PyFinShapeTrapezoidal, FinShape>(m, "FinShapeTrapezoidal", py::multiple_inheritance())
        .def(py::init<const double&, const double&, const double&, const double&>(),
            "chord_root"_a, "chord_tip"_a, "span"_a, "length_sweep"_a)
        .def_property("chord_root", &FinShape::ChordRoot, &FinShapeTrapezoidal::SetChordRoot)
        .def_property("chord_tip", &FinShape::ChordTip, &FinShapeTrapezoidal::SetChordTip)
        .def_property("span", &FinShape::Span, &FinShapeTrapezoidal::SetSpan)
        .def_property("length_sweep", &FinShape::LengthSweep, &FinShapeTrapezoidal::SetLengthSweep)

        .def("attributes", [](FinShape* fin_shape) -> py::dict {
            return py::dict("chord_root"_a = fin_shape->ChordRoot(),
                            "chord_tip"_a = fin_shape->ChordTip(),
                            "span"_a = fin_shape->Span(),
                            "length_sweep"_a = fin_shape->LengthSweep());
        });

    py::enum_<FinCrossSection>(m, "FinCrossSection")
        .value("SQUARE", FinCrossSection::SQUARE)
        .value("ROUNDED", FinCrossSection::ROUNDED)
        .value("AIRFOIL", FinCrossSection::AIRFOIL)
        .value("DOUBLE_WEDGE", FinCrossSection::DOUBLE_WEDGE);

    py::class_<Fins, Part>(m, "Fins")
        .def(py::init<const std::string&, const std::string&, Material*,
            FinShape*, const FinCrossSection&, const int&, const double&, const double&,
            bool, const double&, bool, const double&>(),
            "name"_a, "comments"_a, "material"_a,
            "shape"_a, "cross_section"_a, "number"_a, "thickness"_a, "radius_fillet"_a,
            "mass_override_switch"_a, "mass_override"_a, "cg_override_switch"_a, "cg_override"_a)

        .def_property("shape", [](Fins* fins) -> FinShape* {
                switch (fins->AssignedShapeType()) {
                    case FinShapeType::TRAPEZOIDAL:
                        return fins->AssignedShape<FinShapeTrapezoidal>();
                }
            }, &Fins::SetShape)
        .def_property("cross_section", &Fins::CrossSection, &Fins::SetFinCrossSection)
        .def_property("number", &Fins::Number, &Fins::SetNumber)
        .def_property("thickness", &Fins::Thickness, &Fins::SetThickness)
        .def_property("radius_fillet", &Fins::RadiusFillet, &Fins::SetRadiusFillet)
        .def("attributes", &AttributesFins);
}