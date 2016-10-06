
 #include "maxwellResourcePack.h"
 
 using namespace std;

 #ifndef __ROBOPART_H
 #define __ROBOPART_H 2016
 class RoboPart {
  public:
    RoboPart(string iname, int iSN, double iweight, double icost, string idescription, string itype):
	name(iname), SN(iSN), weight(iweight), cost(icost), description(idescription), type(itype){} 
    string getName();
    int getSN();
    double getWeight();
    double getCost();
    string getDescription();
    string getType();
  private:
    string name;
    int SN;
    double weight;
    double cost;
    string description;
    string type;
 };
 #endif
