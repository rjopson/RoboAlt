#ifndef _STAGE_H
#define _STAGE_H

#include <iostream>
#include <string>

#include "atmosphere_isa.h"
#include "drag.h"
#include "inertial_override.h"
#include "instance.h"

class Stage {
  public:
    static constexpr double kPi = 3.141592653589793;

    Stage(const std::string& name, const std::string& comments, 
        std::vector<Stage*> stages_above, SurfaceFinish surface_finish, const double& overlap_distance,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~Stage();   

    //Mass calculations
    double MassEmpty(bool include_stages_above);

    //geometric calculations
    double AreaReference(bool include_stages_above);
    double Length(bool include_stages_above);
    double DiameterMax(bool include_stages_above);
    double FinenessRatio(bool include_stages_above);    

    //instance functions    
    std::vector<Instance*> InstanceList(bool include_stages_above);

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

    std::string name_;
    std::string comments_;     
    SurfaceFinish surface_finish_;
    double distance_overlap_; //amount this stage overlaps the one in front of it     
      

  private:
    static int id_counter;    

    int id_;
    InertialOverride inertial_;
    Instance* instance_root_;
    std::vector<Stage*> stages_above_; //stages above this one (could be zero if this is the sustainer...)       
};
#endif

//void CreateInstance(Part* part, PartPosition position_type, const double& position_from);
//void DeleteInstance();

