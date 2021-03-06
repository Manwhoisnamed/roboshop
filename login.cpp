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
    SalesFloor salesfloor;
    Database database;
    storage.loadStorage();
    database.loadData(storage);
    //keep going if somebody logs out but doesn't want to quit
    while(true){
	    while(VALID){    
		cout << "\nWelcome to the Rob Robman's Rockin RoboShop System!\n";
		cout << "===================================================\n";
		cout << "===================================================\n";
		cout << "What level of responsibility do you want to have?\n";
		cout << "0 - Shut down the program, truly no responsibility, you didn't even mean to be here.\n";
		cout << "1 - System Maintenance, some responsibility, you should probably fix the problems that show up.\n";
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
		database.saveData();
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
		    database.saveData();
		    storage.storeStorage(storage);
		    return 0;
		}
		//otherwise it was a logout
		else{
		    storage.storeStorage(storage);
		    continue;
		}
	    }
	    //customer login
	    else if(response == 3){
		cout << "\nWELCOME BELOVED CUSTOMER!!!!\n";
		while(true){
		    cout << "Enter a response below\n";
		    cout << "======================\n";
		    cout << "0 - Go back to the menu\n";
		    cout << "1 - Login with your pin\n";
		    cout << "2 - Register\n";
		    cout << "======================\n";
		    cout << "Your response: ";
		    cin >> response;
		    if(cin.fail()){
			cin.clear();
			cin.ignore(400, '\n');
			cout << "Bad input. Try again\n\n";
		    }
		    else if(response == 0){
			break;
		    }
		    else if(response == 1){
			int tries = 0, pin, badpin = true;
			cout << "\n";
			for(tries = 0; tries < 3; tries ++){
			    cout << "What is your pin: ";
			    cin >> pin;
			    if(cin.fail()){
	    			cin.clear();
	    			cin.ignore(400,'\n');
	    			cout << "Bad input. ";
			    }
			    else if(database.checkPin(pin)){
				Customer customer;
				customer = database.loadCustomerPin(pin);
				if(salesfloor.CustomerMenu(customer, database, storage)){
			   	    database.saveData();
				    storage.storeStorage(storage);
				    return 0;
				}
				else{
				    database.saveData();
				    badpin = false;
				    break;
				}
			    }	 
			    else{
				cout << "Invalid pin. ";
			    }
			}
			if(badpin){
			    cout << "\n3 tries failed returning to the login page.\n\n";	
			}
			break;
		    }
		    else if(response == 2){
			salesfloor.addCustomer(database);
		    	cout << "You successfully registered, continue to login.\n\n";
			continue;
		    }
		    else{
			cout << "Not a valid input.\n\n";
		    }
		}
		response = 1337;
		
    	    }
	    //Sales associate login
	    else if(response == 4){
		response = 1337;
		if(salesfloor.SAMenu(database, storage)){
		    storage.storeStorage(storage);
		    database.saveData();
		    return 0;
		}
		else{
		    database.saveData();
		    continue;
		}
    	    }
    }
}
