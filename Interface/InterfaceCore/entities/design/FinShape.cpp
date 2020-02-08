#include "FinShape.h"

FinShape::FinShape()
{
}


FinShape::~FinShape()
{
}

FinShapeTrapezoidal::FinShapeTrapezoidal() {

}

FinShapeTrapezoidal::FinShapeTrapezoidal(double in_chordRoot, double in_chordTip, double in_span, double in_lengthSweep) :
	FinShape() {

	chordRoot_trap = in_chordRoot;
	chordTip_trap = in_chordTip;
	span_trap = in_span;
	lengthSweep_trap = in_lengthSweep;
}

FinShapeTrapezoidal::~FinShapeTrapezoidal() {

}

double FinShapeTrapezoidal::chordRoot() {
	return chordRoot_trap;
}

double FinShapeTrapezoidal::chordTip() {
	return chordTip_trap;
}

double FinShapeTrapezoidal::span() {
	return span_trap;
}

double FinShapeTrapezoidal::lengthSweep() {
	return lengthSweep_trap;
}

double FinShapeTrapezoidal::areaPlanform() {
	return ((chordRoot() + chordTip()) / 2.0)*span();
}

double FinShapeTrapezoidal::MAC() {
	double taper = chordTip() / chordRoot();
	return chordRoot() * (2.0 / 3.0) * ((1.0 + taper + std::pow(taper, 2.0)) / (1.0 + taper));
}

double FinShapeTrapezoidal::MAC_y() {
	return (span() / 3.0)*((chordRoot() + 2.0 * chordTip()) / (chordRoot() + chordTip()));
}

double FinShapeTrapezoidal::MAC_LE_from_root_LE() {
	return (lengthSweep() / span())*MAC_y();
}

double FinShapeTrapezoidal::angleSweepMid() {
	return (180.0 / PI)*atan2(0.5*(chordTip() - chordRoot()) + lengthSweep(), span());
}

double FinShapeTrapezoidal::angleSweepLE() {
	return (180.0 / PI)*atan2(lengthSweep(), span());
}

double FinShapeTrapezoidal::aspectRatio() {
	return std::pow(span(), 2.0) / areaPlanform();
}
