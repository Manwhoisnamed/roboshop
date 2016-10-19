//Maxwell Sanders 1001069652
//This is the file to start all of the rest of the program
#include "testFile.cpp"
#include "Menu.h"
#include "Storage.h"
#include "Database.h"
#include "SalesFloor.h"

using namespace std;

//use this to define all of the valid startup menu options
#define VALID (response<0||response>4)

int main(void){
    int response = 1337;
    Menu menu;
    Storage storage;
    storage.loadStorage();
    //keep going if somebody logs out but doesn't want to quit
    while(true){
	    while(VALID){    
		cout << "\nWelcome to the Rob Robman's Rockin RoboShop System!\n";
		cout << "===================================================\n";
		cout << "===================================================\n";
		cout << "What level of responsibility do you want to have?\n";
		cout << "0 - Shut down the program, truly no responsibility, you didn't even mean to be here.\n";
		cout << "1 - System Maintenance, some responsibilty, you should probably fix the problems that show up.\n";
		cout << "2 - Rob Robman, project manager.\n";
		cout << "3 - Customer login, your responsibility as a consumer is to look at our catalogue.\n";
		cout << "4 - Sales Associate login, your responsibility as a salesman is to create orders.\n";
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
		storage.storeStorage(storage);
		return 0;
	    }
	    //run the test code
	    else if(response == 1){
		test();
		return 0;
	    }
	    //run the menu, with permissions 1	
	    else if(response == 2){
		response = 1337;
		//if mainmenu returns true it means it is quitting
		if(menu.mainMenu(1,storage)){
		    storage.storeStorage(storage);
		    return 0;
		}
		//otherwise it was a logout
		else{
		    continue;
		}
	    }
	    //customer login
	    else if(response == 3){
		cout << "if we had a customer login you would be using it right now.\n";
		response = 1337;
    	    }
	    //Sales associate login
	    else if(response == 4){
		cout << "if we had a SA login you would be using it right now.\n";
		response = 1337;
    	    }
    }
}
