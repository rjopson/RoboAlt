#ifndef _PART_H
#define _PART_H

#include <algorithm>
#include <cmath>
#include <iostream>

#include "aerodynamics.h"
#include "entity.h"
#include "material.h"

enum class PartType {
    BULKHEAD, 
    FINS,
    NOSECONE,
    PARACHUTE,
    POINT_MASS,
    TUBE_BODY,
    TUBE_INNER    
};

class Part : public Entity {
  public:
    static constexpr double kPi = 3.141592653589793;    

    Part(PartType type, const std::string& name, const std::string& comments, Material* material,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    virtual ~Part() = 0; 
    
    //Values 
    void SetMaterial(Material* material);
    void SetOverrideMass(const double& mass);
    void SetOverrideMassSwitch(bool use_override);

    //Datanames
    Material* AssignedMaterial() const;
    PartType Type() const;    
    double Mass() const;
    double OverrideMass() const;
    bool OverrideMassSwitch() const;
    double Cg() const;   
    double OverrideCg() const;
    double OverrideCgSwitch() const;

    //Core functions
    virtual double DiameterAirflow()  const { return 0.0; }
    virtual double LengthAirflow()  const { return 0.0; }
    virtual double AreaReference()  const { return 0.0; }
    virtual double AreaWet()  const { return 0.0; }
    virtual double VolumeMaterial() const = 0;
    virtual double DragCoefficient(const double& area_reference, const double& fineness_rocket,
        const double& mach_number, const double& skin_friction_coefficient,
        const bool& aft_most_part, const double& area_thrusting)  const {return 0.0;}
    virtual double DragCoefficientFriction(const double& skin_friction_coefficient,
        const double& area_reference, const double& fineness_rocket)  const {return 0.0;}
    virtual double DragCoefficientPressure(const double& mach_number, const double& area_reference)  const { return 0.0; }
    virtual double DragCoefficientBase(const bool& aft_most_part,
        const double& mach_number, const double& area_thrusting, const double& area_reference)  const {return 0.0;}     

  private: 
    Material* material_;
    PartType type_;
    bool mass_override_switch_;
    double mass_override_;
    bool cg_override_switch_;
    double cg_override_;
};
#endif

