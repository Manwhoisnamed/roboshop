//maxwell Sanders 1001069652
//the robo model header

 #include "Arm.h"
 #include "Leg.h"
 #include "Torso.h"
 #include "Battery.h"
 #include "Head.h"
 #include <vector>

 using namespace std;

 #ifndef __ROBOMODEL_H
 #define __ROBOMODEL_H 2016
 class RoboModel {
  public:
    RoboModel(){};    

    void setHead(Head head);
    void setLeg(Leg leg);
    void setTorso(Torso torso);
    void addBattery(Battery battery);
    void addArm(Arm arm);

    Arm getArm(int i);
    Leg getLeg();
    Torso getTorso();
    Battery getBattery(int i);
    Head getHead();
  private:
    int batterySpace;
    Head head;
    Leg leg;
    Torso torso;
    vector<Arm> arms;
    vector<Battery> batteries;
    
 };
 #endif
