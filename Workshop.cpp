//maxwell Sanders 1001069652

#include "Workshop.h"
#include <iostream>

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
	cin >> response;
	//if the response isn't in the list or not an int, try again
	if(response<0||response>0||cin.fail()){
	    cout << "That is an invalid response! Please try again.\n";
	    cin.clear();
	    cin.ignore();
	    response = 1337;
	}
    }
    cout << "\n";
}
