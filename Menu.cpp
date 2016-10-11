//maxwell sanders 10010696952
//this class is in charge of the menu
#include "Menu.h"

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
    setPerm(perm);
    if(getPerm() == 1){
	cout << "Welcome Rob Robman!\n";
    }
    if(getPerm() == 0){
	cout << "Welcome Grunt.\n";
    }
    return true;
}
