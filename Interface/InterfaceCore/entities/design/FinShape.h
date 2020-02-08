
#ifndef _FIN_SHAPE_H
#define _FIN_SHAPE_H

#include "Part.h"

class FinShape
{
public:
	FinShape();
	~FinShape();

	virtual double chordRoot() = 0;
	virtual double chordTip() = 0;
	virtual double span() = 0;
	virtual double lengthSweep() = 0;
	virtual double areaPlanform() = 0;
	virtual double MAC() = 0;
	virtual double MAC_y() = 0;
	virtual double MAC_LE_from_root_LE() = 0;
	virtual double angleSweepMid() = 0;
	virtual double angleSweepLE() = 0;
	virtual double aspectRatio() = 0;
};
#endif

#ifndef _FIN_SHAPE_TRAPEZOIDAL_H
#define _FIN_SHAPE_TRAPEZOIDAL_H

class FinShapeTrapezoidal : public FinShape
{
public:
	FinShapeTrapezoidal();
	FinShapeTrapezoidal(double in_chordRoot, double in_chordTip, double in_span, double in_lengthSweep);
	~FinShapeTrapezoidal();

	double chordRoot_trap;
	double chordTip_trap;
	double span_trap;
	double lengthSweep_trap;

	double chordRoot();
	double chordTip();
	double span();
	double lengthSweep();
	double areaPlanform();
	double MAC();
	double MAC_y();
	double MAC_LE_from_root_LE();
	double angleSweepMid();
	double angleSweepLE();
	double aspectRatio();

private:
	
};
#endif // !_FIN_SHAPE_TRAPEZOIDAL

