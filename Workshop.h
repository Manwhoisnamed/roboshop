//maxwell Sanders 1001069652

 #include "RoboPart.h"
 #include "Arm.h"
 #include "Leg.h"
 #include "Battery.h"
 #include "Torso.h"
 #include "Head.h"
 
 using namespace std;

 #ifndef __Workshop_H
 #define __Workshop_H 2016
 class Workshop{
  private:
    
  public:
    Workshop(){};
    void useWorkshop();    
    Arm makeArm();
    Leg makeLeg();
    Battery makeBattery();
    Torso makeTorso();
    Head makeHead();
 };
 #endif
