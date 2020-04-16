#include "part_instance.h"

PartInstance::PartInstance()

    : Entity("", ""),
      part_(nullptr),
      parent_(nullptr) {

}

//for all other instances
PartInstance::PartInstance(const std::string& name, Part* part, PartInstance* parent, PartPosition position_type, const double& position_from)

    : part_(part),
      parent_(parent),
      position_type_(position_type),
      position_from_(position_from),
      Entity(name, "") {

    if (parent)
        parent->AddChild(this, -1);
}

PartInstance::~PartInstance() {

    if (parent_ != nullptr) {
        
        //add children to parent of instance being erased
        auto it = std::find(parent_->children_.begin(), parent_->children_.end(), this); //find location of this instance        
        
        if (children_.size() > 0) {
            parent_->AddChildren(children_, it - parent_->children_.begin()); //add this instance's children to this instance's parent
        }            
        
        //erase instance from parent
        it = std::find(parent_->children_.begin(), parent_->children_.end(), this);
        parent_->children_.erase(it);
    }
}

void PartInstance::SetPositionType(PartPosition position_type) {
    position_type_ = position_type;
}

void PartInstance::SetPositionFrom(const double& position) {
    position_from_ = position;
}

Part* PartInstance::AssignedPart() const {
    return part_;
}

PartPosition PartInstance::PositionType() const {
    return position_type_;
}

double PartInstance::PositionFrom() const {
    return position_from_;
}

PartInstance* PartInstance::Parent() const {
    return parent_;
}

void PartInstance::AddChild(PartInstance* child, const int& index) {

    child->parent_ = this;

    if (index == -1 || index >= children_.size()) {
        children_.push_back(child);
    }
    else {
        children_.insert(children_.begin() + index, child);
    }    
}

void PartInstance::AddChildren(std::vector<PartInstance*> children, const int& index) {

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

double PartInstance::PositionFromParentFront() {

    if (position_type_ == PartPosition::FOREWARD) {
        return position_from_;
    }
    else {
        return parent_->part_->LengthAirflow() - part_->LengthAirflow() + position_from_;
    }
}

std::vector<PartInstance*> PartInstance::Children(bool recursive) {

    std::vector<PartInstance*> flat_list;

    if (recursive) {
        InstanceFlatListRecursive(this, flat_list);
    }
    else {
        flat_list = children_;
    }
    return flat_list;
}

void PartInstance::InstanceFlatListRecursive(PartInstance* parent, std::vector<PartInstance*>& flat_list) {

    if (parent->parent_ != nullptr) {
        flat_list.push_back(parent);
    }    

    if (!parent->children_.empty()) { //additional instances in child list
        for (auto child : parent->children_) {
            InstanceFlatListRecursive(child, flat_list);
        }
    }
}


