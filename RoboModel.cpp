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
