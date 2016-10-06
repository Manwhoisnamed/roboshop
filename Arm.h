

 #include "maxwellResourcePack.h"
 #include "RoboPart.h"
 
 using namespace std;

 #ifndef __ARM_H
 #define __ARM_H 2016
 class Arm : public RoboPart{
  private:
    double passiveDraw;
    double activeDraw;
    bool laser;    
  public:
    Arm(string iname, int iSN, double iweight, double icost, string idescription, string itype, double ipassiveDraw, double iactiveDraw, bool ilaser) : RoboPart(iname, iSN, iweight, icost, idescription, itype) , passiveDraw(ipassiveDraw), activeDraw(iactiveDraw), laser(ilaser){}
    double getpassiveDraw();
    double getactiveDraw();
    bool getLaser();
 };
 #endif