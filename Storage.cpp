//maxwell Sanders 1001069652
//this class stores the parts and robomodels

#include "Storage.h"
#include <iostream>

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

void Storage::printArms(){
    int i = 0, size = Storage::arms.size();
    cout << "\nViewing the arms\n";
    cout << "================\n";
    for(i = 0; i < size; i ++){
	cout << i+1 << " - " << Storage::arms.at(i).getName() << "\n";
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
	cout << i+1 << " - " << Storage::legs.at(i).getName() << "\n";
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
	cout << i+1 << " - " << Storage::heads.at(i).getName() << "\n";
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
	cout << i+1 << " - " << Storage::batteries.at(i).getName() << "\n";
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
	cout << i+1 <<" - " << Storage::torsos.at(i).getName() << "\n";
	cout << "    Description: " << Storage::torsos.at(i).getDescription() << "\n";
	cout << "    SN: " << Storage::torsos.at(i).getSN() << "\n";
	cout << "    Weight: " << Storage::torsos.at(i).getWeight() << "\n";
	cout << "    Cost: " << Storage::torsos.at(i).getCost() << "\n";
	cout << "    Draw: " << Storage::torsos.at(i).getDraw() << "\n";
        cout << "    Battery Space: " << Storage::torsos.at(i).getBSpace() << "\n";
    }

}
