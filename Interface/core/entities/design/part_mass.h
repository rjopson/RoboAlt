#ifndef _MASS_H
#define _MASS_H

#include "part.h"

class Mass : public Part {
  public:
    Mass(std::string name, std::string comments, Material* material,
        const double& mass,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~Mass();

    double mass_;
};
#endif 

