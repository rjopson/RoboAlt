#include "Database.h"

Database::Database() {
}


Database::~Database() {
}

void Database::CreateMaterial() {
    materials_.push_back(new Material("material" + std::to_string(materials_.size() + 1)))
}

void Database::DeleteMaterial(Material* material) {
    auto it = std::find(materials_.begin(), materials_.end(), material);

    if (it != materials_.end()) {
        delete (*it);
        materials_.erase(it);
    }
}

Material* Database::GetMaterial(const int& id) {
    return GetEntity(materials_, id);
}

void Database::CreateRocket() {
    rockets_.push_back(new Rocket("rocket" + std::to_string(rockets_.size() + 1), ""));
}

void Database::DeleteRocket(Rocket* rocket) {
    auto it = std::find(rockets_.begin(), rockets_.end(), rocket);

    if (it != rockets_.end()) {
        delete (*it);
        rockets_.erase(it);
    }    
}

Rocket* Database::GetRocket(const int& id) {
    return GetEntity(rockets_, id);
}

Rocket* Database::GetRocket(const std::string& name) {
    return GetEntity(rockets_, name);
}

void Database::CreateInstance(Part* part, Instance* parent) {
    instances_.push_back(new Instance(part, parent, PartPosition::FOREWARD, 0.0));
}

void Database::DeleteInstance(Instance* instance) {

    //Remove instance from parent list 
    instance->RemoveFromParent();

    //Get list of objects to delete
    std::vector<Instance*> toDelete = instance->Children(true);
    toDelete.push_back(instance);

    //Delete, and remove from container
    for (auto it = toDelete.begin(); it != toDelete.end(); ) {
        auto it_found = std::find(instances_.begin(), instances_.end(), (*it));
        delete (*it_found);
        instances_.erase(it_found);
    }
}


//template <class T>
//T* Database::GetEntity(std::vector<T*> list, const int& id) {
//
//    for (auto it = list.begin(), it != list.end(); it++) {
//        if ((*it)->Id() == id) {
//            return (*it);
//        }
//    }
//    else {
//        return nullptr;
//    }
//}