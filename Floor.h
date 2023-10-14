#ifndef FLOOR_H
#define FLOOR_H

class Floor {

  private:

  public:
    Floor(){};

    void serviced(char* direction);
    void inform(char* direction);
    void detectMe(int floorNumber);

};

#endif
