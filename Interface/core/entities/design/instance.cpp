#include "instance.h"

int Instance::id_counter = 0;

Instance::Instance() {
    part_ = NULL;
    parent_ = NULL;
}

//for all other instances
Instance::Instance(Part* part, Instance* parent, PartPosition position_type, const double& position_from) 

    : part_(part),
      parent_(parent),
      position_type_(position_type),
      position_from_(position_from) {

    id_counter++;
    id_ = id_counter;

    parent->AddChild(this);
}

Instance::~Instance() {

    //remove the instance from it's parent list
    if (parent_ != NULL) {
        parent_->DeleteChild(this);
    }

    //Delete all children if parent is deleted - these have no meaning
    for (auto it = children_.begin(); it != children_.end(); it++) {
        delete (*it);
    }
}

void Instance::CreateChild(Part* part, PartPosition position_type, const double& position_from) {
    new Instance(part, this, position_type, position_from);
}

void Instance::AddChild(Instance* child) {

    child->parent_ = this;
    children_.push_back(child);
}

void Instance::DeleteChild(Instance* child) {

    for (auto it = children_.begin(); it != children_.end(); it++) {
        if ((*it) == child) {
            delete (*it);
            children_.erase(it);
        }
    }
}

double Instance::PositionFromParentFront() {

    if (position_type_ == PartPosition::FOREWARD) {
        return position_from_;
    }
    else {
        return parent_->part_->LengthAirflow() - part_->LengthAirflow() + position_from_;
    }
}


