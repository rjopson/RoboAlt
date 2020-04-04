#include "instance.h"

unsigned int Instance::id_counter = 0;

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

Instance::~Instance() {}

void Instance::SetPositionType(PartPosition position_type) {
    position_type_ = position_type;
}

void Instance::MovePosition(const double& position) {
    position_from_ = position;
}

Part* Instance::AssignedPart() const {
    return part_;
}

PartPosition Instance::PositionType() const {
    return position_type_;
}

double Instance::PositionFrom() const {
    return position_from_;
}

Instance* Instance::Parent() const {
    return parent_;
}

void Instance::AddChild(Instance* child) {

    child->parent_ = this;
    children_.push_back(child);
}

void Instance::RemoveChild(Instance* child) {
    auto it = std::find(children_.begin(), children_.end(), child);

    if (it != children_.end()) {
        children_.erase(it);
    }    
}

void Instance::RemoveFromParent() {
    parent_->RemoveChild(this);
}

double Instance::PositionFromParentFront() {

    if (position_type_ == PartPosition::FOREWARD) {
        return position_from_;
    }
    else {
        return parent_->part_->LengthAirflow() - part_->LengthAirflow() + position_from_;
    }
}

std::vector<Instance*> Instance::Children(bool recursive) {

    std::vector<Instance*> flat_list;

    if (recursive) {
        InstanceFlatListRecursive(this, flat_list);
    }
    else {
        flat_list = children_;
    }
    return flat_list;
}

void Instance::InstanceFlatListRecursive(Instance* parent, std::vector<Instance*>& flat_list) {

    flat_list.push_back(parent);

    if (!parent->children_.empty()) { //additional instances in child list
        for (auto child : parent->children_) {
            InstanceFlatListRecursive(child, flat_list);
        }
    }
}


