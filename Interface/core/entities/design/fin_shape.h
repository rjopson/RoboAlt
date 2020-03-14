
#ifndef _FIN_SHAPE_H
#define _FIN_SHAPE_H

#include "part.h"

class FinShape {
  public:
    static constexpr double kPi = 3.141592653589793;
    
    FinShape();
    virtual ~FinShape() = 0;

    virtual double ChordRoot() = 0;
    virtual double ChordTip() = 0;
    virtual double Span() = 0;
    virtual double LengthSweep() = 0;
    virtual double AreaPlanform() = 0;
    virtual double Mac() = 0;
    virtual double MacY() = 0;
    virtual double MacLE_FromRoot_LE() = 0;
    virtual double AngleSweepMid() = 0;
    virtual double AngleSweepLE() = 0;
    virtual double AspectRatio() = 0;
};
#endif

#ifndef _FIN_SHAPE_TRAPEZOIDAL_H
#define _FIN_SHAPE_TRAPEZOIDAL_H

class FinShapeTrapezoidal : public FinShape {
  public:
    FinShapeTrapezoidal();
    FinShapeTrapezoidal(const double& chord_root, const double& chord_tip, const double& span, const double& length_sweep);
    ~FinShapeTrapezoidal();    

    double ChordRoot();
    double ChordTip();
    double Span();
    double LengthSweep();
    double AreaPlanform();
    double Mac();
    double MacY();
    double MacLE_FromRoot_LE();
    double AngleSweepMid();
    double AngleSweepLE();
    double AspectRatio();

  private:
    double chord_root_;
    double chord_tip_;
    double span_;
    double length_sweep_;
};
#endif // !_FIN_SHAPE_TRAPEZOIDAL

