//maxwell Sanders 1001069652
//this is my robomodel class

#include "RoboModel.h"

void RoboModel::setTorso(Torso itorso){
    RoboModel::torso = itorso;
    RoboModel::batterySpace = itorso.getBSpace();
}

void RoboModel::setHead(Head ihead){
    RoboModel::head = ihead;
}

void RoboModel::setLeg(Leg ileg){
    RoboModel::leg = ileg;
}

void RoboModel::addArm(Arm arm){
    RoboModel::arms.push_back(arm);
}

void RoboModel::addBattery(Battery battery){
    RoboModel::batteries.push_back(battery);
}

void RoboModel::setName(string iname){
    RoboModel::name = iname;
}

void RoboModel::setDescription(string idescription){
    RoboModel::description = idescription;
}

void RoboModel::setPrice(double iprice){
    RoboModel::price = iprice;
}

void RoboModel::setMN(int iMN){
    RoboModel::MN = iMN;
}


Torso RoboModel::getTorso(){
    return RoboModel::torso;
}

Leg RoboModel::getLeg(){
    return RoboModel::leg;
}

Arm RoboModel::getArm(int i){
    return RoboModel::arms.at(i - 1);
}

Battery RoboModel::getBattery(int i){
    return RoboModel::batteries.at(i - 1);
}

Head RoboModel::getHead(){
    return RoboModel::head;
}

int RoboModel::getMN(){
    return RoboModel::MN;
}

double RoboModel::getActiveLife(){
   double charge = 0, draw = 0, life;
   double i;
   for( i : RoboModel::batteries){
	charge+=i.getCharge();
   }
   draw += RoboModel::torso.getDraw();
   draw += RoboModel::leg.getactiveDraw();
   draw += RoboModel::head.getDraw();
   for( i : RoboModel::arms){
	draw+=i.getactiveDraw();
   }
   life = charge / draw;
   return life;
}

double RoboModel::getPassiveLife(){
   double charge = 0, draw = 0, life;
   double i;
   for( i : RoboModel::batteries){
	charge+=i.getCharge();
   }
   draw += RoboModel::torso.getDraw();
   draw += RoboModel::leg.getpassiveDraw();
   draw += RoboModel::head.getDraw();
   for( i : RoboModel::arms){
	draw+=i.getpassiveDraw();
   }
   life = charge / draw;
   return life;
}

double RoboModel::getCost(){
   double cost;
   double i;
   cost += RoboModel::torso.getCost();
   cost += RoboModel::leg.getCost();
   cost += RoboModel::head.getCost();
   if(RoboModel::arms.size() != 0){
       for( i : RoboModel::arms){
           cost+=i.getCost();
       }
   }
   if(RoboModel::batteries.size() != 0){
       for( i : RoboModel::batteries){
           cost+=i.getCost();
       }  
   }
   return cost;
}

double RoboModel::getPrice(){
    return RoboModel::price;
}

string RoboModel::getDescription(){
    return RoboModel::description;
}

string RoboModel::getName(){
    return RoboModel::name;
}
