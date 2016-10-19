//maxwell Sanders 1001069652
//this class is used to store parts and models

 #include <string.h>
 #include <vector>
 #include "Arm.h"
 #include "Leg.h"
 #include "Battery.h"
 #include "Torso.h"
 #include "Head.h"
 #include "RoboModel.h"
 
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
    vector<RoboModel> robomodels;    
  public:
    //the usage suite
    Storage(){};
    void useStorage();

    //the sizing suite
    int armSize();
    int legSize();
    int torsoSize();
    int batterySize();
    int headSize();
    int robomodelSize();

    //the printing suite
    void printArms();
    void printLegs();
    void printTorsos();
    void printBatteries();
    void printHeads();
    void printRoboModel(RoboModel robomodel);
    void printCatalogue();

    //the addition suite
    void addArm(Arm arm);
    void addLeg(Leg leg);
    void addBattery(Battery battery);
    void addTorso(Torso torso);
    void addHead(Head head);
    void addRoboModel(RoboModel robomodel);

    //the getter suite
    Arm getArm(int i);
    Leg getLeg(int i);
    Battery getBattery(int i);
    Torso getTorso(int i);
    Head getHead(int i);
    RoboModel getRoboModel(int i);

    //persistence
    void loadStorage();
    void storeStorage(Storage storage);

    //data validation suite
    void checkArms(Arm arm);
    void checkLegs(Leg leg);
    void checkBatteries(Battery battery);
    void checkTorsos(Torso torso);
    void checkHeads(Head head); 
 };
 #endif
