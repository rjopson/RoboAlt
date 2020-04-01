#ifndef _INSTANCE_H
#define _INSTANCE_H

#include <vector>

#include "part.h"

enum class PartPosition {
    FOREWARD,
    AFT
};

class Instance {
  public:
    Instance(Part* part, Instance* parent, PartPosition position_type, const double& position_from);	
    ~Instance();	  
    
    double PositionFromParentFront();
    std::vector<Instance*> Children(bool recursive);
    void AddChild(Instance* child);

    Part* part_;    
    Instance* parent_;
    PartPosition position_type_;
    double position_from_;    

  private:
    static int id_counter;

    void InstanceFlatListRecursive(Instance* parent, std::vector<Instance*>& flat_list);
    
    int id_;
    std::vector<Instance*> children_;
};
#endif

//void CreateChild(Part* part, PartPosition position_type, const double& position_from);    //
    //void DeleteChild(Instance* child);
    //void Reposition(const double& index_parent_list);