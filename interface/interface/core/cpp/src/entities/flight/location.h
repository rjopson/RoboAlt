#ifndef _LOCATION_H
#define _LOCATION_H

#include "entity.h"

class Location : public Entity {
  public:
    Location();
    ~Location();

private:
    double altitude_pad_msl_;
    double temperature_typical_;
};
#endif

