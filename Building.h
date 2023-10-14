#ifndef BUILDING_H
#define BUILDING_H

#include <vector>

#include "Elevator.h"
#include "Floor.h"

class Building { 

  private:

  public:
    Building(){};

    std::vector<Floor> floors;
    std::vector<Elevator> elevators;

};

#endif