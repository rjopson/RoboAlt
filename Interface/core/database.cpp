#include "Database.h"

Database::Database() {
}


Database::~Database() {
}

void Database::CreateMaterial(const std::string& name) {
    materials_.push_back(new Material(name, "", 1000.0));
}

void Database::DeleteMaterial(Material* material) {
    auto it = std::find(materials_.begin(), materials_.end(), material);

    if (it != materials_.end()) {
        delete (*it);
        materials_.erase(it);
    }
}

Material* Database::GetMaterial(const std::string& name) {
    return GetEntity(materials_, name);
}

void Database::CreateRocket(const std::string& name) {
    rockets_.push_back(new Rocket(name, ""));
}

void Database::DeleteRocket(Rocket* rocket) {
    auto it = std::find(rockets_.begin(), rockets_.end(), rocket);

    if (it != rockets_.end()) {
        delete (*it);
        rockets_.erase(it);
    }    
}

//Rocket* Database::GetRocket(const int& id) {
//    return GetEntity(rockets_, id);
//}

Rocket* Database::GetRocket(const std::string& name) {
    return GetEntity(rockets_, name);
}

void Database::CreatePart(const std::string& name, PartType part_type, Rocket* rocket) {

    Material* material = materials_[0];
    Part* part = nullptr;

    switch (part_type) {
        case PartType::FINS: {
            FinShape* shape = new FinShapeTrapezoidal(0.102, 0.013, 0.051, 0.076);
            Fins* fins = new Fins(name, "", material, shape, FinCrossSection::ROUNDED, 3, 0.003, 0.005, false, 0.0, false, 0.0);
            fins_.push_back(fins);
            part = fins;
        }
        case PartType::NOSECONE: {
            Nosecone* nosecone = new Nosecone(name, "",
                material, NoseconeType::VON_KARMEN, 1.0, 0.157, 0.01, 0.0, 0.002, 0.0, 0.03139, 0.0, false, 0.0, false, 0.0);
            nosecones_.push_back(nosecone);
            part = nosecone;
        }
        case PartType::TUBE_BODY: {
            TubeBody* tube_body = new TubeBody(name, "", 
                material, 0.076, 0.03139, 0.001, false, 0, false, 0);
            body_tubes_.push_back(tube_body);
            part = tube_body;
        }
    }

    parts_.push_back(part);
    rocket->AddPart(part);
}

void Database::DeletePart(Part* part) {

    //delete part, remove from any rockets
    //Delete any instances it contains
}

Fins* Database::GetFins(const std::string& name) {
    return GetEntity(fins_, name);
}

Nosecone* Database::GetNosecone(const std::string& name) {
    return GetEntity(nosecones_, name);
}

TubeBody* Database::GetTubeBody(const std::string& name) {
    return GetEntity(body_tubes_, name);
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