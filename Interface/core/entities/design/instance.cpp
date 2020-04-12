#include "instance.h"

unsigned int Instance::id_counter = 0;

Instance::Instance()

    : Entity("", "") {

    id_ = 0;
}

//for all other instances
Instance::Instance(const std::string& name, Part* part, Instance* parent, PartPosition position_type, const double& position_from)

    : part_(part),
      parent_(parent),
      position_type_(position_type),
      position_from_(position_from),
      Entity(name, "") {

    id_counter++;
    id_ = id_counter;

    if (parent)
        parent->AddChild(this, -1);
}

Instance::~Instance() {
    auto it = std::find(parent_->children_.begin(), parent_->children_.end(), this); //find location of this instance
    parent_->AddChildren(children_, it - parent_->children_.begin()); //add this instance's children to this instance's parent
    parent_->children_.erase(it);
}

void Instance::SetPositionType(PartPosition position_type) {
    position_type_ = position_type;
}

void Instance::SetPositionFrom(const double& position) {
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

void Instance::AddChild(Instance* child, const int& index) {

    child->parent_ = this;

    if (index == -1 || index >= children_.size()) {
        children_.push_back(child);
    }
    else {
        children_.insert(children_.begin() + index, child);
    }    
}

void Instance::AddChildren(std::vector<Instance*> children, const int& index) {

    for (auto inst : children) {
        inst->parent_ = this;
    }

    if (index == -1 || index >= children_.size()) {
        children_.insert(children_.end(), children.begin(), children.end());
    }
    else {
        children_.insert(children_.begin() + index, children.begin(), children.end());
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


