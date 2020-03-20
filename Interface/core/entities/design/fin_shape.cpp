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

double FinShapeTrapezoidal::ChordRoot() const {
    return chord_root_;
}

double FinShapeTrapezoidal::ChordTip() const {
    return chord_tip_;
}

double FinShapeTrapezoidal::Span() const {
    return span_;
}

double FinShapeTrapezoidal::LengthSweep() const {
    return length_sweep_;
}

double FinShapeTrapezoidal::AreaPlanform() const {
    return ((ChordRoot() + ChordTip()) / 2.0)*Span();
}

double FinShapeTrapezoidal::Mac() const {
    double taper = ChordTip() / ChordRoot();
    return ChordRoot() * (2.0 / 3.0) * ((1.0 + taper + std::pow(taper, 2.0)) / (1.0 + taper));
}

double FinShapeTrapezoidal::MacY() const {
    return (Span() / 3.0)*((ChordRoot() + 2.0 * ChordTip()) / (ChordRoot() + ChordTip()));
}

double FinShapeTrapezoidal::MacLE_FromRoot_LE() const {
    return (LengthSweep() / Span())*MacY();
}

double FinShapeTrapezoidal::AngleSweepMid() const {
    return (180.0 / kPi)*atan2(0.5*(ChordTip() - ChordRoot()) + LengthSweep(), Span());
}

double FinShapeTrapezoidal::AngleSweepLE() const {
    return (180.0 / kPi)*atan2(LengthSweep(), Span());
}

double FinShapeTrapezoidal::AspectRatio() const {
    return std::pow(Span(), 2.0) / AreaPlanform();
}
