//maxwell Sanders 1001069652
//workshop header file

 #include "Arm.h"
 #include "Leg.h"
 #include "Battery.h"
 #include "Torso.h"
 #include "Head.h"
 #include "Storage.h"
 #include "RoboModel.h"

 using namespace std;

 #ifndef __Workshop_H
 #define __Workshop_H 2016
 class Workshop{
  private:
    
  public:
    Workshop(){};
    Storage useWorkshop(Storage storage);    
    Arm makeArm(Storage storage);
    Leg makeLeg(Storage storage);
    Battery makeBattery(Storage storage);
    Torso makeTorso(Storage storage);
    Head makeHead(Storage storage);
    RoboModel makeRoboModel(Storage storage);
 };
 #endif
