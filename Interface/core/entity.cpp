
#include "entity.h"

Entity::Entity(const std::string& name, const std::string& comments) 
    : name_(name),
      comments_(comments) {

}

Entity::~Entity() {}

void Entity::SetName(const std::string& name) {
    name_ = name;
}

void Entity::SetComments(const std::string& comments) {
    comments_ = comments;
}

std::string Entity::Name() const {
    return name_;
}

std::string Entity::Comments() const {
    return comments_;
}
