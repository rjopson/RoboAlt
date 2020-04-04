#ifndef _PART_H
#define _PART_H

#include <algorithm>
#include <cmath>
#include <iostream>

#include "aerodynamics.h"
#include "inertial_override.h"
#include "material.h"

enum class PartType {
    TUBE_BODY,
    NOSECONE,
    FINS,
    TUBE_INNER,
    BULKHEAD,
    PARACHUTE,
    POINT_MASS
};

class Part {
  public:
    static constexpr double kPi = 3.141592653589793;    

    Part(const std::string& name, const std::string& comments, Material* material,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~Part(); 
    
    //Properties    
    void SetMaterial(Material* material);
    void SetOverrideMass(const double& mass);
    void SetModelMass();
    Material* AssignedMaterial() const;
    PartType Type() const;    
    
    //Inertial
    double Mass() const;
    double Cg() const;    

    //Geometric calculations
    virtual double DiameterAirflow()  const { return 0.0; }
    virtual double LengthAirflow()  const { return 0.0; }
    virtual double AreaReference()  const { return 0.0; }
    virtual double AreaWet()  const { return 0.0; }
    virtual double VolumeMaterial() const = 0;

    //Drag calculations 
    virtual double DragCoefficient(const double& area_reference, const double& fineness_rocket,
        const double& mach_number, const double& skin_friction_coefficient,
        const bool& aft_most_part, const double& area_thrusting)  const {return 0.0;}
    virtual double DragCoefficientFriction(const double& skin_friction_coefficient,
        const double& area_reference, const double& fineness_rocket)  const {return 0.0;}
    virtual double DragCoefficientPressure(const double& mach_number, const double& area_reference)  const { return 0.0; }
    virtual double DragCoefficientBase(const bool& aft_most_part,
        const double& mach_number, const double& area_thrusting, const double& area_reference)  const {return 0.0;}     

  private:
    static unsigned int id_counter;
    
    unsigned int id_;
    InertialOverride inertial_;    
    Material* material_;

  protected:
    PartType type_;
};
#endif

