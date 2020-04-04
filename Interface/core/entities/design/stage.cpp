#include "Stage.h"

unsigned int Stage::id_counter = 0;

Stage::Stage(const std::string& name, const std::string& comments, 
    std::vector<Stage*> stages_above, SurfaceFinish surface_finish, const double& distance_overlap,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : name_(name),
      comments_(comments),
      stages_above_(stages_above),
      surface_finish_(surface_finish),
      distance_overlap_(distance_overlap),
      inertial_(mass_override_switch, mass_override, cg_override_switch, cg_override) {

    id_counter++;
    id_ = id_counter;

    instance_root_ = new Instance(nullptr, nullptr, PartPosition::FOREWARD, 0.0);
}

Stage::~Stage() {
    delete instance_root_;
}

void Stage::SetName(const std::string& name) {
    name_ = name;
}

void Stage::SetComments(const std::string& comments) {
    comments_ = comments;
}

void Stage::SetSurfaceFinish(SurfaceFinish surface_finish) {
    surface_finish_ = surface_finish;
}

void Stage::SetDistanceOverlap(const double& distance_overlap) {
    distance_overlap_ = distance_overlap;
}

std::string Stage::Name() const {
    return name_;
}

std::string Stage::Comments() const {
    return comments_;
}

SurfaceFinish Stage::AssignedSurfaceFinish() const {
    return surface_finish_;
}

double Stage::DistanceOverlap() const {
    return distance_overlap_;
}

std::vector<Instance*> Stage::InstanceList(bool include_stages_above) {

    std::vector<Instance*> flat_list;

    if (include_stages_above) {
        for (auto it = stages_above_.begin(); it != stages_above_.end(); it++) {
            std::vector<Instance*> flat_list_stage = (*it)->instance_root_->Children(true);
            flat_list.insert(flat_list.end(), flat_list_stage.begin() + 1, flat_list_stage.end());
        }
    }

    //Always do this stage
    std::vector<Instance*> flat_list_stage = instance_root_->Children(true);
    flat_list.insert(flat_list.end(), flat_list_stage.begin() + 1, flat_list_stage.end());

    return flat_list;
}

/*
void Stage::CreateInstance(Part* part, PartPosition position_type, const double& position_from) {
    new Instance(part, instance_root_, position_type, position_from);
}
*/

double Stage::AreaReference(bool include_stages_above) {
    return kPi * std::pow(DiameterMax(include_stages_above) / 2.0, 2.0);
}

double Stage::Length(bool include_stages_above) {

    double length_sum = 0.0;
    std::vector<Stage*> stages;

    if (include_stages_above) {
        stages = stages_above_;
    }
    
    //Add base stage always
    stages.push_back(this);

    for (auto stage : stages) {
        for (auto instance : stage->instance_root_->Children(false)) {

            length_sum += instance->AssignedPart()->LengthAirflow();
        }
    }
    return length_sum;
}

double Stage::DiameterMax(bool include_stages_above) {

    double diameter = 0.0;

    std::vector<Stage*> stages;

    if (include_stages_above) {
        stages = stages_above_;
    }

    //Add base stage always
    stages.push_back(this);

    for (auto stage : stages) {
        for (auto instance : stage->instance_root_->Children(false)) { //loop through each child in top level instances
            if (instance->AssignedPart()->Type() == PartType::NOSECONE || instance->AssignedPart()->Type() == PartType::TUBE_BODY) {
                if (instance->AssignedPart()->DiameterAirflow() > diameter) {
                    diameter = instance->AssignedPart()->DiameterAirflow();
                }
            }
        }
    }
    return diameter;
}

double Stage::FinenessRatio(bool include_stages_above) {
    return Length(include_stages_above) / DiameterMax(include_stages_above);
}

double Stage::MassEmpty(bool include_stages_above) {

    double mass = 0.0;

    std::vector<Stage*> stages;

    if (include_stages_above) {
        stages = stages_above_;
    }

    //Add base stage always
    stages.push_back(this);

    for (auto stage : stages) {

        if (inertial_.mass_override_switch_) {//user wants override value to be used
            mass += inertial_.mass_override_;
        }
        else {
            for (auto instance : instance_root_->Children(true)) { //loop through each child 
                mass += instance->AssignedPart()->Mass();
            }
        }
    }
    return mass;
}

SurfaceFinish Stage::GetSurfaceFinish(bool include_stages_above) {

    SurfaceFinish surface_finish = SurfaceFinish::PAINTED;

    std::vector<Stage*> stages;

    if (include_stages_above) {
        stages = stages_above_;
    }

    //Add base stage always
    stages.push_back(this);

    for (auto stage : stages) {
        if (stage->surface_finish_ < surface_finish) {
            surface_finish = stage->surface_finish_;
        }
    }
    return surface_finish;
}

Drag Stage::DragModel(bool include_stages_above, const double& area_motor,
    const double& mach_min, const double& mach_max, const double& steps) {

    std::vector<double> mach(steps);
    std::vector<double> cd_power_off(steps);
    std::vector<double> cd_power_on(steps);    

    for (int i = 0; i != steps; i++) {

        double m = (double)i*(mach_max / ((double)steps));
        mach[i] = m;
        cd_power_off[i] = DragCoefficient(include_stages_above, m, 0.0);
        cd_power_on[i] = DragCoefficient(include_stages_above, m, area_motor);
    }

    Drag drag("Internal Model", "", true, DragType::ROCKET, "", AreaReference(include_stages_above), 
        mach, cd_power_off,
        mach, cd_power_on);

    return drag;
}

double Stage::DragCoefficient(bool include_stages_above, const double& mach_number, const double& area_thrusting) {
    return DragCoefficientFriction(include_stages_above, mach_number) +
        DragCoefficientPressure(include_stages_above, mach_number) +
        DragCoefficientBase(include_stages_above, mach_number, area_thrusting);
}

double Stage::DragCoefficientFriction(bool include_stages_above, const double& mach_number) {

    double cd = 0.0;
    AtmosphereISA atmosphere;
    double velocity = mach_number * atmosphere.SpeedOfSound(0.0);

    double cf = Aerodynamics::SkinFrictionCoefficient(Aerodynamics::SurfaceRoughness(GetSurfaceFinish(include_stages_above)), Length(include_stages_above), velocity, mach_number);

    for (auto instance : InstanceList(include_stages_above)) {
        cd += instance->AssignedPart()->DragCoefficientFriction(cf, AreaReference(include_stages_above), FinenessRatio(include_stages_above));
    }

    return cd;
}

double Stage::DragCoefficientPressure(bool include_stages_above, const double& mach_number) {

    double cd = 0.0;

    for (auto instance : InstanceList(include_stages_above)) {
        cd += instance->AssignedPart()->DragCoefficientPressure(mach_number, AreaReference(include_stages_above));
    }
    return cd;
}

double Stage::DragCoefficientBase(bool include_stages_above, const double& mach_number, const double& area_thrusting) {

    double cd = 0.0;

    std::vector<Instance*> instanceList = InstanceList(include_stages_above);

    for (auto instance : instanceList) {
        bool aft_most = false;
        if (instance == instance_root_->Children(false).back()) {
            aft_most = true;
        }
        cd += instance->AssignedPart()->DragCoefficientBase(aft_most, mach_number, area_thrusting, AreaReference(include_stages_above));
    }
    return cd;
}

void Stage::PrintDragCoefficients(bool include_stages_above, const double& mach_number, const double& area_thrusting) {

    AtmosphereISA atmosphere;
    double velocity = mach_number * atmosphere.SpeedOfSound(0.0);
    double cf = Aerodynamics::SkinFrictionCoefficient(Aerodynamics::SurfaceRoughness(GetSurfaceFinish(include_stages_above)), Length(include_stages_above), velocity, mach_number);

    std::cout << "name cd_f cd_p cd_b cd" << std::endl;
    for (auto instance : InstanceList(include_stages_above)) {

        bool aft_most;
        for (auto instance : InstanceList(include_stages_above)) {
            bool aft_most = false;
            if (instance == instance_root_->Children(false).back()) {
                aft_most = true;
            }
        }
        
        std::cout << instance->AssignedPart()->Name()
            << " " << instance->AssignedPart()->DragCoefficientFriction(cf, AreaReference(include_stages_above), FinenessRatio(include_stages_above))
            << " " << instance->AssignedPart()->DragCoefficientPressure(mach_number, AreaReference(include_stages_above))
            << " " << instance->AssignedPart()->DragCoefficientBase(aft_most, mach_number, area_thrusting, AreaReference(include_stages_above))
            << " " << instance->AssignedPart()->DragCoefficient(AreaReference(include_stages_above), FinenessRatio(include_stages_above), mach_number, cf, aft_most, area_thrusting)
            << std::endl;
    }
    std::cout << "total "
        << " " << DragCoefficientFriction(include_stages_above, mach_number)
        << " " << DragCoefficientPressure(include_stages_above, mach_number)
        << " " << DragCoefficientBase(mach_number, include_stages_above, area_thrusting) 
        << " " << DragCoefficient(include_stages_above, mach_number, area_thrusting) << std::endl;
} 


