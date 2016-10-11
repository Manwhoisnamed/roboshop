//maxwell sanders 10010696952
//this class is in charge of the menu
#include "Menu.h"

#define INVALID response<0||response>2

using namespace std;


//used to see who the user is
int Menu::getPerm(){
	return Menu::permissions;
}

//use to change users mid program
void Menu::setPerm(int perm){
	Menu::permissions = perm;
}

//if this returns true it will exit overall, otherwise it will return to login
bool Menu::mainMenu(int perm){
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
	cout << "0 - exit\n";
	cout << "1 - logout\n";
	cout << "2 - use the workshop\n";
	cin >> response;
        if(INVALID || cin.fail()){
	    cout << "That is an invalid task.\n\n";
	    cin.clear();
	    cin.ignore();
	    response = 30;	
        }

	//exit
	if(response == 0){
	    return true;
	}

	//logout
	if(response == 1){
	    return false;
	}

	//use the workshop
	if(response == 2){
	    if(getPerm() == 1){
	    	cout << "Hey you would be using the workshop if it was implemented.\n";
	    	response = 1337;
	    }
	    else{
		cout << "You don't have the permissions to do that.\n";
	    	response = 1337;
	    }
	}
	
	//thats not a task
	else{
	    cout << "That's not a task!!! Please try again.\n";
	}
	
    }
}
