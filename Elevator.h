#ifndef ELEVATOR_H
#define ELEVATOR_H

class Elevator {
  private:

  public:
    Elevator(){};

    void stop();
    void start(char* direction);
    void newFloor(int floorNumber, int carNumber);
    void carRequest(int floorNumber);

};

#endif





