#ifndef ECS_H
#define ECS_H

class ECS {
  private:

  public:
    ECS(){};

    void floorRequest(int floorNumber, char* direction);
    void newFloor(int floorNumber, int carNumber);
    void carRequest(int carNumber, int floorNumber);
    void readyToMove(int carNumber);
    void makeDecision();

};

#endif
