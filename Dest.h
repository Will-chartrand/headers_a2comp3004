#ifndef ADEST_H
#define ADEST_H

#include "Floor.h"
#include "FloorButton.h"
#include "Button.h"

class Dest {

  private:

  public:
    Button* button;
    Floor* floor;

    ADest(Button* button, Floor* floor) : button(button), floor(floor){};

};

#endif
