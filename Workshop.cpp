//maxwell Sanders 1001069652

#include "Workshop.h"
#include <iostream>
#include <string>

using namespace std;

//this is basically the menu for the workshop
void Workshop::useWorkshop(){
    int response = 1337;	
    //stay in the workshop until you don't want to be in the workshop
    while(response !=  0){
	cout << "\nYou are now using the workshop\n";
    	cout << "What would you like to do?\n";
	cout << "==============================\n";
	cout << "==============================\n";
	cout << "0 - Leave the workshop\n";
	cout << "1 - Make a robo-torso\n";
	cout << "2 - Make a robo-arm\n";
	cout << "3 - Make a robo-leg\n";
	cout << "4 - Make a robo-head\n";
	cout << "5 - Make a robo-battery\n";
	cout << "==============================\n";
	cout << "Your response: ";
	cin >> response;
	//if the response isn't in the list or not an int, try again
	if(response<0||response>5||cin.fail()){
	    cout << "That is an invalid response! Please try again.\n";
	    cin.clear();
	    cin.ignore(400,'\n');
	    response = 1337;
	}
	//make torso
	else if(response == 1){
	    makeTorso();
	    response = 1337;
	}
	//make arm
	else if(response == 2){
	    makeArm();
	    response = 1337;
	}
	//make leg
	else if(response == 3){
	    makeLeg();
	    response = 1337;
	}
	//make head
	else if(response == 4){
	    makeHead();
	    response = 1337;
	}
	//make battery
	else if(response == 5){
	    makeBattery();
	    response = 1337;
	}

    }
    cout << "\n";
}

//this makes an arm object and returns it
Arm Workshop::makeArm(){
    //input variables
    char input[200];
    int response;    

    //variables necessary for RoboPart
    string name;
    int SN;
    double weight;
    double cost;
    string description;
    
    //variables used to make the specific part
    double passiveDraw;
    double activeDraw;
    bool laser;
    
    //the part of the code that gets all of the user input
    //the first part gets the strings so I can blast through get line
    cout << "What do you want to name the part? ";
    //have to do one to clear the channel
    cin.getline(input,100);
    cin.getline(input, 100);
    name = input;
    cout << "Enter the arm description: ";
    cin.getline(input,200);
    description = input;

    //serial number
    cout << "What is the Serial Number? ";
    cin >> SN;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the Serial Number? ";
	cin >> SN;
    }

    //weight
    cout << "What is the weight? ";
    cin >> weight;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the weight? ";
	cin >> weight;
    }

    //cost
    cout << "What is the cost? ";
    cin >> SN;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is cost? ";
	cin >> SN;
    }

    //passive draw
    cout << "What is the passive draw? ";
    cin >> passiveDraw;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the passive draw? ";
	cin >> passiveDraw;
    }

    //active draw
    cout << "What is the active draw? ";
    cin >> activeDraw;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the active draw? ";
	cin >> activeDraw;
    }

    //laser
    cout << "Does it have a laser (1/0)? ";
    cin >> response;
    while(cin.fail() || response < 0 || response > 1){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. Does it have the laser (1/0)? ";
	cin >> response;
    }
    if(response == 1){
	laser = true;
    }
    else{
	laser = false;
    }

    Arm arm(name,SN,weight,cost,description,passiveDraw,activeDraw,laser); 
    return arm;
}

//this makes a leg object and returns it
Leg Workshop::makeLeg(){
    //input variables
    char input[200];
    int response;    

    //variables necessary for RoboPart
    string name;
    int SN;
    double weight;
    double cost;
    string description;
    
    //variables used to make the specific part
    double passiveDraw;
    double activeDraw;
    int speed;   
 
    //the part of the code that gets all of the user input
    //the first part gets the strings so I can blast through get line
    cout << "What do you want to name the part? ";
    //have to do one to clear the channel
    cin.getline(input,100);
    cin.getline(input, 100);
    name = input;
    cout << "Enter the leg description: ";
    cin.getline(input,200);
    description = input;

    //serial number
    cout << "What is the Serial Number? ";
    cin >> SN;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the Serial Number? ";
	cin >> SN;
    }

    //weight
    cout << "What is the weight? ";
    cin >> weight;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the weight? ";
	cin >> weight;
    }

    //cost
    cout << "What is the cost? ";
    cin >> SN;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the cost? ";
	cin >> SN;
    }

    //passive draw
    cout << "What is the passive draw? ";
    cin >> passiveDraw;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the passive draw? ";
	cin >> passiveDraw;
    }

    //active draw
    cout << "What is the active draw? ";
    cin >> activeDraw;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the active draw? ";
	cin >> activeDraw;
    }

    //speed
    cout << "What is the speed? ";
    cin >> speed;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the speed of the leg? ";
	cin >> speed;
    }

    Leg leg(name,SN,weight,cost,description,passiveDraw,activeDraw,speed); 
    return leg;
}

//this makes a head object and returns it
Head Workshop::makeHead(){
    //input variables
    char input[200];
    int response;    

    //variables necessary for RoboPart
    string name;
    int SN;
    double weight;
    double cost;
    string description;
    
    //variables used to make the specific part
    double draw;
    bool laser;
    
    //the part of the code that gets all of the user input
    //the first part gets the strings so I can blast through get line
    cout << "What do you want to name the part? ";
    //have to do one to clear the channel
    cin.getline(input,100);
    cin.getline(input, 100);
    name = input;
    cout << "Enter the head description: ";
    cin.getline(input,200);
    description = input;

    //serial number
    cout << "What is the Serial Number? ";
    cin >> SN;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the Serial Number? ";
	cin >> SN;
    }

    //weight
    cout << "What is the weight? ";
    cin >> weight;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the weight? ";
	cin >> weight;
    }

    //cost
    cout << "What is the cost? ";
    cin >> SN;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is cost? ";
	cin >> SN;
    }

    //draw
    cout << "What is the draw? ";
    cin >> draw;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the draw? ";
	cin >> draw;
    }

    //laser
    cout << "Does it have a laser (1/0)? ";
    cin >> response;
    while(cin.fail() || response < 0 || response > 1){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. Does it have the laser (1/0)? ";
	cin >> response;
    }
    if(response == 1){
	laser = true;
    }
    else{
	laser = false;
    }

    Head head(name,SN,weight,cost,description,draw,laser); 
    return head;
}

//this makes a torso object
Torso Workshop::makeTorso(){
    //input variables
    char input[200]; 

    //variables necessary for RoboPart
    string name;
    int SN;
    double weight;
    double cost;
    string description;
    
    //variables used to make the specific part
    double draw;
    int bSpace; 

    //the part of the code that gets all of the user input
    //the first part gets the strings so I can blast through get line
    cout << "What do you want to name the part? ";
    //have to do one to clear the channel
    cin.getline(input,100);
    cin.getline(input, 100);
    name = input;
    cout << "Enter the battery description: ";
    cin.getline(input,200);
    description = input;

    //serial number
    cout << "What is the Serial Number? ";
    cin >> SN;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the Serial Number? ";
	cin >> SN;
    }

    //weight
    cout << "What is the weight? ";
    cin >> weight;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the weight? ";
	cin >> weight;
    }

    //cost
    cout << "What is the cost? ";
    cin >> SN;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the cost? ";
	cin >> SN;
    }

    //charge
    cout << "What is the draw? ";
    cin >> draw;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the draw? ";
	cin >> draw;
    }

    //battery Space
    cout << "How much battery space does the torso have (1/2/3)? ";
    cin >> bSpace;
    while(cin.fail() || bSpace < 1 || bSpace > 3){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. How much battery space does the torso have (1/2/3)? ";
	cin >> bSpace;
    }

    Torso torso(name,SN,weight,cost,description,draw,bSpace); 
    return torso;
}

//this makes a battery object
Battery Workshop::makeBattery(){
    //input variables
    char input[200]; 

    //variables necessary for RoboPart
    string name;
    int SN;
    double weight;
    double cost;
    string description;
    
    //variables used to make the specific part
    double charge;
 
    //the part of the code that gets all of the user input
    //the first part gets the strings so I can blast through get line
    cout << "What do you want to name the part? ";
    //have to do one to clear the channel
    cin.getline(input,100);
    cin.getline(input, 100);
    name = input;
    cout << "Enter the battery description: ";
    cin.getline(input,200);
    description = input;

    //serial number
    cout << "What is the Serial Number? ";
    cin >> SN;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the Serial Number? ";
	cin >> SN;
    }

    //weight
    cout << "What is the weight? ";
    cin >> weight;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the weight? ";
	cin >> weight;
    }

    //cost
    cout << "What is the cost? ";
    cin >> SN;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the cost? ";
	cin >> SN;
    }

    //charge
    cout << "What is the charge? ";
    cin >> charge;
    while(cin.fail()){
	cin.clear();
	cin.ignore(400,'\n');
	cout << "Bad input. What is the charge? ";
	cin >> charge;
    }

    Battery battery(name,SN,weight,cost,description,charge); 
    return battery;
}
