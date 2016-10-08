

 #include "Torso.h"
 
 using namespace std;

 string Torso::getType(){
	return "torso";
 }

 double Torso::getDraw(){
 	return Torso::draw;
 }

 int Torso::getBSpace(){
	return Torso::batterySpace;
 }

 int Torso::getASockets(){
	return Torso::armSockets;
 }

 int Torso::getLSockets(){
	return Torso::legSockets;
 }

