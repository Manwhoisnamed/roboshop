
 #include "maxwellResourcePack.h"
 #include "RoboPart.h"
 
 using namespace std;

 #ifndef __TORSO_H
 #define __TORSO_H 2016
 class Torso : public RoboPart{
  private:
    double draw;
    int batterySpace;
    int armSockets;
    int legSockets;
  public:
    Torso(string iname, int iSN, double iweight, double icost, string idescription, double idraw, int bspace, int asockets, int lsockets) : RoboPart(iname, iSN, iweight, icost, idescription) , draw(idraw), batterySpace(bspace), armSockets(asockets), legSockets(lsockets){}
    double getDraw();
    int getBSpace();
    int getASockets();
    int getLSockets();
    string getType() override;
 };
 #endif
