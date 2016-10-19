//maxwell sanders 10010696952
//this class is in charge of the menu
#include "Menu.h"
#include "Workshop.h"

#define INVALID response<0||response>3

using namespace std;
Workshop workshop;

//used to see who the user is
int Menu::getPerm(){
	return Menu::permissions;
}

//use to change users mid program
void Menu::setPerm(int perm){
	Menu::permissions = perm;
}

//if this returns true it will exit overall, otherwise it will return to login
bool Menu::mainMenu(int perm, Storage storage){
    int response = 1337;
    setPerm(perm);
    if(getPerm() == 0){
	cout << "\nWelcome Grunt.\n";
    }
    if(getPerm() == 1){
	cout << "\nWelcome Rob Robman!\n";
    }
    while(INVALID){
	cout << "What would you like to do?\n";
	cout << "==========================\n";
	cout << "==========================\n";
	cout << "0 - exit program\n";
	cout << "1 - logout\n";
	cout << "2 - use the workshop\n";
	cout << "3 - look at storage\n";
	cout << "==========================\n";
	cout << "Your response: ";
	cin >> response;
        if(INVALID || cin.fail()){
	    cout << "\nThat is an invalid task.\n\n";
	    cin.clear();
	    cin.ignore(400,'\n');
	    response = 30;	
        }

	//exit
	if(response == 0){
	    return true;
	}

	//logout
	else if(response == 1){
	    return false;
	}

	//use the workshop
	else if(response == 2){
	    if(getPerm() == 1){
	    	storage = workshop.useWorkshop(storage);
	    	response = 1337;
	    }
	    else{
		cout << "\nYou don't have the permissions to do that.\n";
	    	response = 1337;
	    }
	}
	
	//use the storage shed
        else if(response == 3){
	    if(getPerm() == 1){
		storage.useStorage();
		response = 1337;
	    }
	    else{
		cout <<"\nYou don't have the permissions to do that.\n";
		response = 1337;
	    }
	}

	//thats not a task
	else{
	    cout << "That's not a task!!! Please try again.\n";
	}
	
    }
}
