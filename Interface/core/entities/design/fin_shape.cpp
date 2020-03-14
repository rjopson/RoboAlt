#include "fin_shape.h"

FinShape::FinShape() {}

FinShape::~FinShape() {}

FinShapeTrapezoidal::FinShapeTrapezoidal() {}

FinShapeTrapezoidal::FinShapeTrapezoidal(const double& chord_root, const double& chord_tip, 
    const double& span, const double& length_sweep) 
    : FinShape(),
      chord_root_(chord_root),
      chord_tip_(chord_tip),
      span_(span),
      length_sweep_(length_sweep) {}

FinShapeTrapezoidal::~FinShapeTrapezoidal() {}

double FinShapeTrapezoidal::ChordRoot() {
    return chord_root_;
}

double FinShapeTrapezoidal::ChordTip() {
    return chord_tip_;
}

double FinShapeTrapezoidal::Span() {
    return span_;
}

double FinShapeTrapezoidal::LengthSweep() {
    return length_sweep_;
}

double FinShapeTrapezoidal::AreaPlanform() {
    return ((ChordRoot() + ChordTip()) / 2.0)*Span();
}

double FinShapeTrapezoidal::Mac() {
    double taper = ChordTip() / ChordRoot();
    return ChordRoot() * (2.0 / 3.0) * ((1.0 + taper + std::pow(taper, 2.0)) / (1.0 + taper));
}

double FinShapeTrapezoidal::MacY() {
    return (Span() / 3.0)*((ChordRoot() + 2.0 * ChordTip()) / (ChordRoot() + ChordTip()));
}

double FinShapeTrapezoidal::MacLE_FromRoot_LE() {
    return (LengthSweep() / Span())*MacY();
}

double FinShapeTrapezoidal::AngleSweepMid() {
    return (180.0 / kPi)*atan2(0.5*(ChordTip() - ChordRoot()) + LengthSweep(), Span());
}

double FinShapeTrapezoidal::AngleSweepLE() {
    return (180.0 / kPi)*atan2(LengthSweep(), Span());
}

double FinShapeTrapezoidal::AspectRatio() {
    return std::pow(Span(), 2.0) / AreaPlanform();
}
