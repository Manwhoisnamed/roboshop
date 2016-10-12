//maxwell Sanders 1001069652
//this class is used to store parts and models

 #include <vector>
 #include "Arm.h"
 #include "Leg.h"
 #include "Battery.h"
 #include "Torso.h"
 #include "Head.h"
 
 using namespace std;

 #ifndef __Storage_H
 #define __Storage_H 2016
 class Storage{
  private:
    vector<Arm> arms;
    vector<Leg> legs;
    vector<Torso> torsos;
    vector<Battery> batteries;
    vector<Head> heads;    
  public:
    Storage(){};
    void useStorage();
    void printArms();
    void printLegs();
    void printTorsos();
    void printBatteries();
    void printHeads();
    void addArm(Arm arm);
    void addLeg(Leg leg);
    void addBattery(Battery battery);
    void addTorso(Torso torso);
    void addHead(Head head);
 };
 #endif
