
#ifndef _FIN_SHAPE_H
#define _FIN_SHAPE_H

#include "part.h"

enum class FinShapeType {
    TRAPEZOIDAL
};

class FinShape {
  public:
    static constexpr double kPi = 3.141592653589793;
    
    FinShape();
    ~FinShape();

    FinShapeType AssignedFinShapeType() const;

    virtual double ChordRoot() const = 0;
    virtual double ChordTip() const = 0;
    virtual double Span() const = 0;
    virtual double LengthSweep() const = 0;
    virtual double AreaPlanform() const = 0;
    virtual double Mac() const = 0;
    virtual double MacY() const = 0;
    virtual double MacLE_FromRoot_LE() const = 0;
    virtual double AngleSweepMid() const = 0;
    virtual double AngleSweepLE() const = 0;
    virtual double AspectRatio() const = 0;

  protected:
    FinShapeType type_;
};
#endif

#ifndef _FIN_SHAPE_TRAPEZOIDAL_H
#define _FIN_SHAPE_TRAPEZOIDAL_H

class FinShapeTrapezoidal : public FinShape {
  public:
    FinShapeTrapezoidal();
    FinShapeTrapezoidal(const double& chord_root, const double& chord_tip, const double& span, const double& length_sweep);
    ~FinShapeTrapezoidal();  

    //Values
    void SetChordRoot(const double& chord_root);
    void SetChordTip(const double& chord_tip);
    void SetSpan(const double& span);
    void SetLengthSweep(const double& length_sweep);

    //Datanames
    double ChordRoot() const;
    double ChordTip() const;
    double Span() const;
    double LengthSweep() const;
    double AreaPlanform() const;
    double Mac() const;
    double MacY() const;
    double MacLE_FromRoot_LE() const;
    double AngleSweepMid() const;
    double AngleSweepLE() const;
    double AspectRatio() const;

  private:
    double chord_root_;
    double chord_tip_;
    double span_;
    double length_sweep_;
};
#endif // !_FIN_SHAPE_TRAPEZOIDAL

