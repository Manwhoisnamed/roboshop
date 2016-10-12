//Maxwell Sanders 1001069652
//This is the file to start all of the rest of the program
#include "testFile.cpp"
#include "Menu.h"

using namespace std;

//use this to define all of the valid startup menu options
#define VALID (response<0||response>3)

int main(void){
    int response = 1337;
    Menu menu;
    //keep going if somebody logs out but doesn't want to quit
    while(true){
	    while(VALID){    
		cout << "\nWelcome to the Rob Robman's Rockin RoboShop System!\n";
		cout << "===================================================\n";
		cout << "===================================================\n";
		cout << "What level of responsibility do you want to have?\n";
		cout << "0 - Shut down the program, truy no responsibility, you didn't even mean to be here.\n";
		cout << "1 - System Maintenance, some responsibilty, you should probably fix the problems that show up.\n";
		cout << "2 - Rob Robman, all the responsibility, you run the shop.\n";
		cout << "3 - Grunt, no responsibility, you do nothing, you serve the purpose to test permissions.\n";
		cout << "===================================================\n";
		cout << "Your response: ";
		cin >> response;
		if(VALID || cin.fail()){
		    cout << "That is an invalid level of responsibility. Please try again.\n";
		    cin.clear();
		    cin.ignore(300,'\n');
		    response = 30;
		}
	    }
	    //end the program
	    if(response == 0){
		return 0;
	    }
	    //run the test code
	    else if(response == 1){
		response = test();
		
	    }
	    //run the menu, with permissions 1	
	    else if(response == 2){
		response = 1337;
		//if mainmenu returns true it means it is quitting
		if(menu.mainMenu(1)){
		    return 0;
		}
		//otherwise it was a logout
		else{
		    continue;
		}
	    }
	    //grunto test case
	    else if(response == 3){
		response = 1337;
		if(menu.mainMenu(0)){
		    return 0;
		}
		else{
		    continue;
		}
    	    }
    }
}
