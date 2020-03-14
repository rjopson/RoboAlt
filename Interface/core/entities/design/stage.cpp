#include "Stage.h"

Stage::Stage(const std::string& name, const std::string& comments, 
    std::vector<Stage*> stages_above, SurfaceFinish surface_finish, const double& distance_overlap,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : name_(name),
      comments_(comments),
      stages_above_(stages_above),
      surface_finish_(surface_finish),
      distance_overlap_(distance_overlap),
      inertial_(mass_override_switch, mass_override, cg_override_switch, cg_override) {

    instance_root_ = new Instance();
}

Stage::~Stage(){
    delete instance_root_;
}

void Stage::InstanceFlatListRecursive(Instance* parent, std::vector<Instance*> &flat_list) {

    flat_list.push_back(parent);

    if (!parent->children_.empty()) { //additional instances in child list
        for (auto child : parent->children_) {
            InstanceFlatListRecursive(child, flat_list);
        }
    }
}

std::vector<Instance*> Stage::InstanceFlatList(bool include_stages_above) {

    std::vector<Instance*> flat_list;

    if (include_stages_above) {
        for (auto it = stages_above_.begin(); it != stages_above_.end(); it++) {
            (*it)->InstanceFlatListRecursive((*it)->instance_root_, flat_list);
            flat_list.erase(flat_list.begin()); //remove the stage root
        }
    }

    //Always do this stage
    InstanceFlatListRecursive(instance_root_, flat_list);
    flat_list.erase(flat_list.begin()); //remove the stage root

    return flat_list;
}

void Stage::CreateInstance(Part* part, PartPosition position_type, const double& position_from) {
    new Instance(part, instance_root_, position_type, position_from);
}

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
        for (auto instance : stage->instance_root_->children_) {
            
            if (instance->part_->type_ == PartType::NOSECONE || 
                instance->part_->type_ == PartType::TUBE_BODY) {

                length_sum += instance->part_->LengthAirflow();
            }
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
        for (auto instance : stage->instance_root_->children_) { //loop through each child in top level instances
            if (instance->part_->type_ == PartType::NOSECONE || instance->part_->type_ == PartType::TUBE_BODY) {
                if (instance->part_->DiameterAirflow() > diameter) {
                    diameter = instance->part_->DiameterAirflow();
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
            for (auto instance : instance_root_->children_) { //loop through each child in top level instances
                mass += instance->part_->Mass();
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
    Drag drag("Internal Model", "", true, DragType::ROCKET, "");

    for (int i = 0; i != steps; i++) {

        double m = (double)i*(mach_max / ((double)steps));
        mach[i] = m;
        cd_power_off[i] = DragCoefficient(include_stages_above, m, 0.0);
        cd_power_on[i] = DragCoefficient(include_stages_above, m, area_motor);
    }

    drag.area_reference_ = AreaReference(include_stages_above);
    drag.data_mach_unpowered_ = mach;
    drag.data_cd_unpowered_ = cd_power_off;
    drag.data_mach_powered_ = mach;
    drag.data_cd_powered_ = cd_power_on;

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

    for (auto instance : InstanceFlatList(include_stages_above)) {
        cd += instance->part_->DragCoefficientFriction(cf, AreaReference(include_stages_above), FinenessRatio(include_stages_above));
    }

    return cd;
}

double Stage::DragCoefficientPressure(bool include_stages_above, const double& mach_number) {

    double cd = 0.0;

    for (auto instance : InstanceFlatList(include_stages_above)) {
        cd += instance->part_->DragCoefficientPressure(mach_number, AreaReference(include_stages_above));
    }
    return cd;
}

double Stage::DragCoefficientBase(bool include_stages_above, const double& mach_number, const double& area_thrusting) {

    double cd = 0.0;

    std::vector<Instance*> instanceList = InstanceFlatList(include_stages_above);

    for (auto instance : instanceList) {
        bool aft_most = false;
        if (instance == instance_root_->children_.back()) {
            aft_most = true;
        }
        cd += instance->part_->DragCoefficientBase(aft_most, mach_number, area_thrusting, AreaReference(include_stages_above));
    }
    return cd;
}

void Stage::PrintDragCoefficients(bool include_stages_above, const double& mach_number, const double& area_thrusting) {

    AtmosphereISA atmosphere;
    double velocity = mach_number * atmosphere.SpeedOfSound(0.0);
    double cf = Aerodynamics::SkinFrictionCoefficient(Aerodynamics::SurfaceRoughness(GetSurfaceFinish(include_stages_above)), Length(include_stages_above), velocity, mach_number);

    std::cout << "name cd_f cd_p cd_b cd" << std::endl;
    for (auto instance : InstanceFlatList(include_stages_above)) {

        bool aft_most;
        for (auto instance : InstanceFlatList(include_stages_above)) {
            bool aft_most = false;
            if (instance == instance_root_->children_.back()) {
                aft_most = true;
            }
        }
        
        std::cout << instance->part_->name_ 
            << " " << instance->part_->DragCoefficientFriction(cf, AreaReference(include_stages_above), FinenessRatio(include_stages_above))
            << " " << instance->part_->DragCoefficientPressure(mach_number, AreaReference(include_stages_above))
            << " " << instance->part_->DragCoefficientBase(aft_most, mach_number, area_thrusting, AreaReference(include_stages_above))
            << " " << instance->part_->DragCoefficient(AreaReference(include_stages_above), FinenessRatio(include_stages_above), mach_number, cf, aft_most, area_thrusting)
            << std::endl;
    }
    std::cout << "total "
        << " " << DragCoefficientFriction(include_stages_above, mach_number)
        << " " << DragCoefficientPressure(include_stages_above, mach_number)
        << " " << DragCoefficientBase(mach_number, include_stages_above, area_thrusting) 
        << " " << DragCoefficient(include_stages_above, mach_number, area_thrusting) << std::endl;
} 


