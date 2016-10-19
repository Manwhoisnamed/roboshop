//maxwell Sanders 1001069652
//this class stores the parts and robomodels

#include "Storage.h"
#include <iostream>

//this is the main ui for storage
void Storage::useStorage(){
    int response = 1337;	
    //stay in the storage shed until you don't want to be in the storage shed
    while(response !=  0){
	cout << "\nYou are now using the Storage Shed\n";
    	cout << "What would you like to do?\n";
	cout << "==============================\n";
	cout << "==============================\n";
	cout << "0 - Leave the Storage Shed\n";
	cout << "1 - Look at the arms\n";
	cout << "2 - Look at the legs\n";
	cout << "3 - Look at the heads\n";
	cout << "4 - Look at the batteries\n";
	cout << "5 - Look at the torsos\n";
	cout << "6 - Look at RoboModels\n";
	cout << "==============================\n";
	cout << "Your response: ";
	cin >> response;
	//if the response isn't in the list or not an int, try again
	if(cin.fail()){
	    cout << "That is an invalid response! Please try again.\n";
	    cin.clear();
	    cin.ignore(400,'\n');
	    response = 1337;
	}
	//print arms
	else if(response == 1){
	    printArms();
	    response = 1337;
	}
	//print legs
	else if(response == 2){
	    printLegs();
	    response = 1337;
	}
	//print heads
	else if(response == 3){
	    printHeads();
	    response = 1337;
	}
	//print batteries
	else if(response == 4){
	    printBatteries();
	    response = 1337;
	}
	//print torsos
	else if(response == 5){
	    printTorsos();
	    response = 1337;
	}

        //print RoboModels
	else if(response == 6){
	    printCatalogue();
	    response = 1337;
	}
	
	//invalid response
	else if(response > 6){
	    cout << "That is an invalid response! Please try again.\n";
	}
    }
    cout << "\n";

}



//the sizing suite
int Storage::armSize(){
    return Storage::arms.size();
}

int Storage::legSize(){
    return Storage::legs.size();
}

int Storage::headSize(){
    return Storage::heads.size();
}

int Storage::torsoSize(){
    return Storage::torsos.size();
}

int Storage::batterySize(){
    return Storage::batteries.size();
}

int Storage::robomodelSize(){
    return Storage::robomodels.size();
}

//the add suite
void Storage::addArm(Arm arm){
    Storage::arms.push_back(arm);
}

void Storage::addLeg(Leg leg){
    Storage::legs.push_back(leg);
}

void Storage::addHead(Head head){
    Storage::heads.push_back(head);
}

void Storage::addTorso(Torso torso){
    Storage::torsos.push_back(torso);
}

void Storage::addBattery(Battery battery){
    Storage::batteries.push_back(battery);
}

void Storage::addRoboModel(RoboModel robomodel){
    Storage::robomodels.push_back(robomodel);	
}

//the print suite
void Storage::printArms(){
    int i = 0, size = Storage::arms.size();
    cout << "\nViewing the arms\n";
    cout << "================\n";
    for(i = 0; i < size; i ++){
	cout << i+1 << " - Name: " << Storage::arms.at(i).getName() << "\n";
	cout << "    Description: " << Storage::arms.at(i).getDescription() << "\n";
	cout << "    SN: " << Storage::arms.at(i).getSN() << "\n";
	cout << "    Weight: " << Storage::arms.at(i).getWeight() << "\n";
	cout << "    Cost: " << Storage::arms.at(i).getCost() << "\n";
	cout << "    Active Draw: " << Storage::arms.at(i).getactiveDraw() << "\n";
	cout << "    Passive Draw: " << Storage::arms.at(i).getpassiveDraw() << "\n";
        cout << "    Laser: " << Storage::arms.at(i).getLaser() << "\n\n";
    }
}

void Storage::printLegs(){
    int i = 0, size = Storage::legs.size();
    cout << "\nViewing the legs\n";
    cout << "================\n";
    for(i = 0; i < size; i ++){
	cout << i+1 << " - Name: " << Storage::legs.at(i).getName() << "\n";
	cout << "    Description: " << Storage::legs.at(i).getDescription() << "\n";
	cout << "    SN: " << Storage::legs.at(i).getSN() << "\n";
	cout << "    Weight: " << Storage::legs.at(i).getWeight() << "\n";
	cout << "    Cost: " << Storage::legs.at(i).getCost() << "\n";
	cout << "    Active Draw: " << Storage::legs.at(i).getactiveDraw() << "\n";
	cout << "    Passive Draw: " << Storage::legs.at(i).getpassiveDraw() << "\n";
        cout << "    Speed: " << Storage::legs.at(i).getSpeed() << "\n\n";
    }

}

void Storage::printHeads(){
    int i = 0, size = Storage::heads.size();
    cout << "\nViewing the heads\n";
    cout << "=================\n";
    for(i = 0; i < size; i ++){
	cout << i+1 << " - Name: " << Storage::heads.at(i).getName() << "\n";
	cout << "    Description: " << Storage::heads.at(i).getDescription() << "\n";
	cout << "    SN: " << Storage::heads.at(i).getSN() << "\n";
	cout << "    Weight: " << Storage::heads.at(i).getWeight() << "\n";
	cout << "    Cost: " << Storage::heads.at(i).getCost() << "\n";
	cout << "    Draw: " << Storage::heads.at(i).getDraw() << "\n";
        cout << "    Laser: " << Storage::heads.at(i).getLaser() << "\n\n";
    }

}

void Storage::printBatteries(){
    int i = 0, size = Storage::batteries.size();
    cout << "\nViewing the batteries\n";
    cout << "=====================\n";
    for(i = 0; i < size; i ++){
	cout << i+1 << " - Name: " << Storage::batteries.at(i).getName() << "\n";
	cout << "    Description: " << Storage::batteries.at(i).getDescription() << "\n";
	cout << "    SN: " << Storage::batteries.at(i).getSN() << "\n";
	cout << "    Weight: " << Storage::batteries.at(i).getWeight() << "\n";
	cout << "    Cost: " << Storage::batteries.at(i).getCost() << "\n";
        cout << "    Charge: " << Storage::batteries.at(i).getCharge() << "\n";
    }

}

void Storage::printTorsos(){
    int i = 0, size = Storage::torsos.size();
    cout << "\nViewing the torsos\n";
    cout << "==================\n";
    for(i = 0; i < size; i ++){
	cout << i+1 <<" - Name: " << Storage::torsos.at(i).getName() << "\n";
	cout << "    Description: " << Storage::torsos.at(i).getDescription() << "\n";
	cout << "    SN: " << Storage::torsos.at(i).getSN() << "\n";
	cout << "    Weight: " << Storage::torsos.at(i).getWeight() << "\n";
	cout << "    Cost: " << Storage::torsos.at(i).getCost() << "\n";
	cout << "    Draw: " << Storage::torsos.at(i).getDraw() << "\n";
        cout << "    Battery Space: " << Storage::torsos.at(i).getBSpace() << "\n";
    }

}

//prints a single very detailed RoboModel
void Storage::printRoboModel(RoboModel robomodel){
    
}

//prints a list of RoboModels with only the key facts
void Storage::printCatalogue(){
    int i = 0, size = Storage::robomodels.size();
    cout << "\nAll available RoboModels\n";
    cout << "========================\n";
    for(i = 0; i < size; i ++){
	cout << i+1 <<" - Name: " << Storage::robomodels.at(i).getName() << "\n";
	cout << "    Description: " << Storage::robomodels.at(i).getDescription() << "\n";
	cout << "    Battery Life (active): " << Storage::robomodels.at(i).getActiveLife() << " hours\n";
	cout << "    Battery Life (passive): " << Storage::robomodels.at(i).getPassiveLife() << " hours\n";	
	cout << "    Price: " << Storage::robomodels.at(i).getPrice() << " USD\n";
	cout << "    Total Weight: " << Storage::robomodels.at(i).getWeight() << " kg\n";
    }
}

//the getter suite, used i
Arm Storage::getArm(int i){
    return Storage::arms.at(i);
}

Leg Storage::getLeg(int i){
    return Storage::legs.at(i);
}

Battery Storage::getBattery(int i){
    return Storage::batteries.at(i);
}

Torso Storage::getTorso(int i){
    return Storage::torsos.at(i);
}

Head Storage::getHead(int i){
    return Storage::heads.at(i);
}

RoboModel Storage::getRoboModel(int i){
    return Storage::robomodels.at(i);
}
