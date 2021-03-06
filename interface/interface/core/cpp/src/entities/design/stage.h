#ifndef _STAGE_H
#define _STAGE_H

#include <iostream>
#include <string>

#include "atmosphere_isa.h"
#include "drag.h"
#include "entity.h"
#include "part_instance.h"

class Stage : public Entity {
  public:
    static constexpr double kPi = 3.141592653589793;

    Stage(const std::string& name, const std::string& comments, SurfaceFinish surface_finish, const double& overlap_distance,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~Stage();   

    //Values
    void SetSurfaceFinish(SurfaceFinish surface_finish);
    void SetDistanceOverlap(const double& distance_overlap);    
    void SetOverrideMassEmpty(const double& mass);
    void SetOverrideMassSwitch(bool use_override);

    //Datanames
    SurfaceFinish AssignedSurfaceFinish() const;
    double DistanceOverlap() const;
    PartInstance* InstanceRoot() const;
    double OverrideMassEmpty() const;
    bool OverrideMassSwitch() const;
    double MassEmpty(bool include_stages_above) const;
    double AreaReference(bool include_stages_above) const;
    double Length(bool include_stages_above) const;
    std::vector<PartInstance*> InstanceList(bool include_stages_above, bool recursive) const;

    //Core functions
    void SetStages(std::vector<Stage*> stages);    
    double DiameterMax(bool include_stages_above) const;
    double FinenessRatio(bool include_stages_above) const;    
    void AddInstance(PartInstance* instance);

    //Drag model calculations
    Drag DragModel(bool include_stages_above, const double& area_motor,
        const double& mach_min, const double& mach_max, const double& steps);
    double DragCoefficient(bool include_stages_above, const double& mach_number, const double& area_thrusting);
    double DragCoefficientFriction(bool include_stages_above, const double& mach_number); //assume a speed of sound to pass velocity
    double DragCoefficientPressure(bool include_stages_above, const double& mach_number);
    double DragCoefficientBase(bool include_stages_above, const double& mach_number, const double& area_thrusting);
    SurfaceFinish GetSurfaceFinish(bool include_stages_above);

    //debugging
    void PrintDragCoefficients(bool include_stages_above, const double& mach_number, const double& area_thrusting);      

  private:

    std::vector<Stage*> StageList(bool include_stages_above) const;

    SurfaceFinish surface_finish_;
    double distance_overlap_; //amount this stage overlaps the one in front of it     
    PartInstance* instance_root_;
    std::vector<Stage*> stages_; //stages above this one, AND this one     
    bool mass_override_switch_;
    double mass_override_;
    bool cg_override_switch_;
    double cg_override_;
};
#endif

