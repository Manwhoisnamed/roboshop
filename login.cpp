//Maxwell Sanders 1001069652
//This is the file to start all of the rest of the program
#include "testFile.cpp"
#include <iostream>

using namespace std;

int main(void){
    int response = 1337;
    while(response < 0 || response > 2){    
	cout << "Welcome to the Rob Robman's Rockin RoboShop System!\n";
	cout << "===================================================\n";
	cout << "===================================================\n";
        cout << "What level of responsibility do you want to have?\n";
	cout << "0 - Shut down the program, truy no responsibility, you didn't even mean to be here.\n";
        cout << "1 - System Maintenance, some responsibilty, you should probably fix the problems that show up.\n";
	cout << "2 - Rob Robman, all the responsibility, you run the shop.\n";
        cin >> response;
	if(response < 0 || response > 2 || cin.fail()){
	    cout << "That is an invalid level of responsibility. Please try again.\n\n";
	    cin.clear();
	    cin.ignore();
	    response = 30;
	}
    }
    //end the program
    if(response == 0){
	return 0;
    }
    //run the test code
    else if(response == 1){
        test();
    }
    //run the menu, with permissions 1	
    else if(response == 2){
	cout << "\nWelcome Rob!\n";
    }
}
