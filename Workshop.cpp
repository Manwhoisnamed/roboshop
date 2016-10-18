//maxwell Sanders 1001069652
//Workshop file

#include "Workshop.h"
#include <iostream>
#include <string>

using namespace std;

//have functions that will return the data validated input and prompts the user what it is for
int inputInt(string prompt);
double inputDouble(string prompt);

//populates robo variables
void PRV(string &name, string &description,double &weight, double &cost, int &SN);

//this is basically the menu for the workshop
Storage Workshop::useWorkshop(Storage storage){
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
	cout << "6 - Make a robo-model\n";
        cout << "==============================\n";
	cout << "Your response: ";
	cin >> response;
	//if the response isn't in the list or not an int, try again
	if(response<0||response>6||cin.fail()){
	    cout << "That is an invalid response! Please try again.\n";
	    cin.clear();
	    cin.ignore(400,'\n');
	    response = 1337;
	}
	//make torso
	else if(response == 1){
	    storage.addTorso(makeTorso());
	    response = 1337;
	}
	//make arm
	else if(response == 2){
	    storage.addArm(makeArm());
	    response = 1337;
	}
	//make leg
	else if(response == 3){
	    storage.addLeg(makeLeg());
	    response = 1337;
	}
	//make head
	else if(response == 4){
	    storage.addHead(makeHead());
	    response = 1337;
	}
	//make battery
	else if(response == 5){
	    storage.addBattery(makeBattery());
	    response = 1337;
	}

	//make robomodel
	else if(response == 6){
	    storage.addRoboModel(makeRoboModel(storage));
	    response = 1337;
	}

    }
    cout << "\n";
    return storage;
}

//this makes an arm object and returns it
Arm Workshop::makeArm(){
    //input variables
    int response;    
    
    //variables necessary for RoboPart
    string name;
    int SN;
    double weight;
    double cost;
    string description;

    //variables used to make the specific part
    bool laser;

    cout << "\nYou are making a leg\n";
    cout << "======================\n";
 
    //populates robopart variables
    PRV(name, description, weight, cost, SN);    

    //passive draw
    double passiveDraw = inputDouble("What is the passive draw? ");

    //active draw
    double activeDraw = inputDouble("What is the active draw? ");

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
    int response;    

    cout << "\nYou are making a leg\n";
    cout << "======================\n";
 
    //variables necessary for RoboPart
    string name;
    int SN;
    double weight;
    double cost;
    string description;

    //populates robopart variables
    PRV(name, description, weight, cost, SN);    

    //passive draw
    double passiveDraw = inputDouble("What is the passive draw? ");

    //active draw
    double activeDraw = inputDouble("What is the active draw? ");

    //speed
    double speed = inputInt("What is the speed? ");

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
    bool laser;

    cout << "\nYou are making a head\n";
    cout << "======================\n";
    
    //populates robopart variables
    PRV(name, description, weight, cost, SN);    

    //draw
    double draw = inputDouble("What is the draw? ");

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
    int bSpace; 

    cout << "\nYou are making a torso\n";
    cout << "======================\n";

    //populates robopart variables
    PRV(name, description, weight, cost, SN);    

    //draw
    double draw = inputDouble("What is the draw? ");

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

    //variables necessary for RoboPart
    string name;
    int SN;
    double weight;
    double cost;
    string description;
    
    cout << "\nYou are making a battery\n";
    cout << "========================\n";

    PRV(name,description, weight, cost, SN);

    //charge
    double charge = inputDouble("What is the charge? ");

    Battery battery(name,SN,weight,cost,description,charge); 
    return battery;
}

RoboModel Workshop::makeRoboModel(Storage storage){
    int response = 1337;    
    string name;
    string description;
    int MN;
    double price;
    RoboModel robomodel;

    cout << "You are making a RoboModel\n";

    //get the torso
    while(response !=  1){
        cout << "\nWhat would you like to do for the torso?\n";
	cout << "========================================\n";
        cout << "1 - Make your own torso\n";
        if(storage.torsoSize() != 0){
            cout << "2 - Load one of the torsos on hand\n";
        }
	cout << "==================================\n";
	cout << "Your response: ";
	cin >> response;
        if(cin.fail()){
	    cin.clear();
	    cin.ignore(400,'\n');
	    cout << "Bad input. Please try again.\n";
            response = 1337;
	}
	else if(response == 1){
	    robomodel.setTorso(makeTorso());
	    break;
	}
	else if(response == 2 && storage.torsoSize()){
	    response = 1337;
	    while(response < 0 || response > storage.torsoSize()){
	        cout << "\nType the number corresponding to the part you want or 0 to make your own.";
		storage.printTorsos();
		cout << "==============================\n";
		cout << "Your response: ";
		cin >> response;
		if(cin.fail()){
		    cin.clear();
		    cin.ignore();
		    cout << "Bad input. Please try again.\n";
		    response = 1337;
		}
	        else if(response == 0){
		    robomodel.setTorso(makeTorso());
		    break;
	        }
		else if(response > 0 && response <= storage.torsoSize()){
		    robomodel.setTorso(storage.getTorso(response - 1));
		}
		else{
		    cout << "Bad input. Please try again.\n";
		}
	    }
	    break;
	}
	else{
	    cout << "Bad input. Please try again.\n";
	}
    }

    response = 1337;
    //get the head 
    while(response !=  1){
        cout << "\nWhat would you like to do for the head?\n";
	cout << "========================================\n";
        cout << "1 - Make your own head\n";
        if(storage.headSize() != 0){
            cout << "2 - Load one of the heads on hand\n";
        }
	cout << "==================================\n";
	cout << "Your response: ";
	cin >> response;
        if(cin.fail()){
	    cin.clear();
	    cin.ignore(400,'\n');
	    cout << "Bad input. Please try again.\n";
            response = 1337;
	}
	else if(response == 1){
	    robomodel.setHead(makeHead());
	    break;
	}
	else if(response == 2 && storage.headSize()){
	    response = 1337;
	    while(response < 0 || response > storage.headSize()){
	        cout << "\nType the number corresponding to the part you want or 0 to make your own.";
		storage.printHeads();
		cout << "==============================\n";
		cout << "Your response: ";
		cin >> response;
		if(cin.fail()){
		    cin.clear();
		    cin.ignore();
		    cout << "Bad input. Please try again.\n";
		    response = 1337;
		}
	        else if(response == 0){
		    robomodel.setHead(makeHead());
		    break;
	        }
		else if(response > 0 && response <= storage.headSize()){
		    robomodel.setHead(storage.getHead(response - 1));
		}
		else{
		    cout << "Bad input. Please try again.\n";
		}
	    }
	    break;
	}
	else{
	    cout << "Bad input. Please try again.\n";
	}
    }

    response = 1337;
    //get the Leg 
    while(response !=  1){
        cout << "\nWhat would you like to do for the leg?\n";
	cout << "========================================\n";
        cout << "1 - Make your own leg\n";
        if(storage.legSize() != 0){
            cout << "2 - Load one of the legs on hand\n";
        }
	cout << "==================================\n";
	cout << "Your response: ";
	cin >> response;
        if(cin.fail()){
	    cin.clear();
	    cin.ignore(400,'\n');
	    cout << "Bad input. Please try again.\n";
            response = 1337;
	}
	else if(response == 1){
	    robomodel.setLeg(makeLeg());
	    break;
	}
	else if(response == 2 && storage.legSize()){
	    response = 1337;
	    while(response < 0 || response > storage.legSize()){
	        cout << "\nType the number corresponding to the part you want or 0 to make your own.";
		storage.printLegs();
		cout << "==============================\n";
		cout << "Your response: ";
		cin >> response;
		if(cin.fail()){
		    cin.clear();
		    cin.ignore();
		    cout << "Bad input. Please try again.\n";
		    response = 1337;
		}
	        else if(response == 0){
		    robomodel.setLeg(makeLeg());
		    break;
	        }
		else if(response > 0 && response <= storage.legSize()){
		    robomodel.setLeg(storage.getLeg(response - 1));
		}
		else{
		    cout << "Bad input. Please try again.\n";
		}
	    }
	    break;
	}
	else{
	    cout << "Bad input. Please try again.\n";
	}
    }

    response = 1337;
    int aCount = 0;
    //get arms 
    while(aCount != 2){
        cout << "\nWhat would you like to do for the arms?\n";
	cout << "========================================\n";
    	cout << "You currently have " << aCount << " arms on your model.\n";
	cout << "0 - Continue, you are satisfied with the amount of arms.\n";
	cout << "1 - Add one of your own arms.\n";
        if(storage.armSize() != 0){
            cout << "2 - Load one of the arms we have on hand\n";
        }
	cout << "==================================\n";
	cout << "Your response: ";
	cin >> response;
        if(cin.fail()){
	    cin.clear();
	    cin.ignore(400,'\n');
	    cout << "Bad input. Please try again.\n";
            response = 1337;
	}
        else if(response == 0){
	    break;
	}
	else if(response == 1){
	    robomodel.addArm(makeArm());
	    aCount ++;
	    response = 1337;
	}
	else if(response == 2 && storage.armSize()){
	    response = 1337;
	    while(response < 0 || response > storage.armSize()){
	        cout << "\nType the number corresponding to the part you want or 0 to make your own.";
		storage.printArms();
		cout << "==============================\n";
		cout << "Your response: ";
		cin >> response;
		if(cin.fail()){
		    cin.clear();
		    cin.ignore();
		    cout << "Bad input. Please try again.\n";
		    response = 1337;
		}
	        else if(response == 0){
		    robomodel.addArm(makeArm());
		    aCount++;
		    response = 1337;
		    break;
	        }
		else if(response > 0 && response <= storage.armSize()){
		    robomodel.addArm(storage.getArm(response - 1));
		    aCount++;
		    response = 1337;   
		    break; 
		}
		else{
		    cout << "Bad input. Please try again.\n";
		}
	    }
	}
	else{
	    cout << "Bad input. Please try again.\n";
	}
    }

    response = 1337;
    int bSpace = robomodel.getTorso().getBSpace();
    int bCount = 0;
    //get batteries 
    while(bCount != bSpace){
        cout << "\nWhat would you like to do for the batteries?\n";
	cout << "========================================\n";
    	cout << "You currently have " << bCount << " batteries on your model which can contain " << bSpace << " batteries.\n";
	if(bCount == 1){
	    cout << "0 - Continue, you are satisfied with the amount of batteries.\n";
	}
	cout << "1 - Add one of your own batteries.\n";
        if(storage.batterySize() != 0){
            cout << "2 - Load one of the batteries we have on hand\n";
        }
	cout << "==================================\n";
	cout << "Your response: ";
	cin >> response;
        if(cin.fail()){
	    cin.clear();
	    cin.ignore(400,'\n');
	    cout << "Bad input. Please try again.\n";
            response = 1337;
	}
        else if(response == 0 && bCount > 0){
	    break;
	}
	else if(response == 1){
	    robomodel.addBattery(makeBattery());
	    bCount ++;
	    response = 1337;
	}
	else if(response == 2 && storage.armSize()){
	    response = 1337;
	    while(response < 0 || response > storage.batterySize()){
	        cout << "\nType the number corresponding to the part you want or 0 to make your own.";
		storage.printBatteries();
		cout << "==============================\n";
		cout << "Your response: ";
		cin >> response;
		if(cin.fail()){
		    cin.clear();
		    cin.ignore();
		    cout << "Bad input. Please try again.\n";
		    response = 1337;
		}
	        else if(response == 0){
		    robomodel.addBattery(makeBattery());
		    bCount++;
		    response = 1337;
		    break;
	        }
		else if(response > 0 && response <= storage.batterySize()){
		    robomodel.addBattery(storage.getBattery(response - 1));
		    bCount++;
		    response = 1337;   
		    break; 
		}
		else{
		    cout << "Bad input. Please try again.\n";
		}
	    }
	}
	else{
	    cout << "Bad input. Please try again.\n";
	}
    }
    while(true){
        cout << "The cost of this model is " << robomodel.getCost() << ".\nWhat do you want the price to be? ";
        cin >> price;
        while(cin.fail()){
	    cin.clear();
	    cin.ignore(1000,'\n');
            cout << "Bad input.\nThe cost of this model is " << robomodel.getCost() << ".\nWhat do you want the price to be? ";
	    cin >> price;
	    continue;
        }
        break;
    }
    robomodel.setPrice(price);
    
    char input[300];
    cout << "What do you want to name the RoboModel? ";
    //clear the channel
    cin.ignore(1000,'\n');
    cin.getline(input, 100);
    name = input;
    cout << "Enter the RoboModel description: ";
    cin.getline(input,300);
    description = input;

    MN = inputInt("Enter a model number: ");

    robomodel.setName(name);
    robomodel.setDescription(description);
    robomodel.setMN(MN); 

    return robomodel;
}

//input methods used to reduce lines of code
int inputInt(string prompt){
    int input;
    cout << prompt;
    cin >> input;
    while(cin.fail()){
	cin.clear();
	cin.ignore(1000,'\n');
	cout << "Bad input. " << prompt;
	cin >> input;
    }
    return input;
}

double inputDouble(string prompt){
    double input;
    cout << prompt;
    cin >> input;
    while(cin.fail()){
	cin.clear();
	cin.ignore(1000,'\n');
	cout << "Bad input. " << prompt;
	cin >> input;
    }
    return input;
}

//populates robo variables
void PRV(string &name, string &description,double &weight, double &cost, int &SN){
    char input[300];
    cout << "What do you want to name the part? ";
    //clear the channel
    cin.ignore(1000,'\n');
    cin.getline(input, 100);
    name = input;
    cout << "Enter the part description: ";
    cin.getline(input,300);
    description = input;

    //serial number
    SN = inputInt("What is the Serial Number? ");

    //weight
    weight = inputDouble("What is the weight? ");

    //cost
    cost = inputDouble("What is the cost? "); 
}

