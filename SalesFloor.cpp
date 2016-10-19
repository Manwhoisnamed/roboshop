//maxwell Sanders 1001069652
//this serves as the menu for the customer and the SA

#include "SalesFloor.h"

//the mainMenu, needs customer info and the database and the storge for the catalogue
bool SalesFloor::CustomerMenu(Customer &customer, Database &database, Storage storage){
    cout << "congrats you got here";

    return true;
}

//mainMenu for the Salesman, add customer, add order
bool SalesFloor::SAMenu(Database &database, Storage storage){
    int response = 1337;
    cout << "\nWelcome Salesman!\n";
    while(true){
        cout << "Select a response to continue\n";
        cout << "=============================\n";
	cout << "0 - Exit the program\n";
	cout << "1 - logout \n";
	cout << "2 - add a customer to the database\n";
	cout << "3 - show all customers\n";
	cout << "=============================\n";
	cout << "Your response: ";
	cin >> response;
	if(cin.fail()){
	    cin.clear();
	    cin.ignore(400, '\n');
	    cout << "Bad input. Try again\n\n";
	}
	else if(response == 0){
	    return true;
	}
	else if(response == 1){
	    return false;
	}
	else if(response == 2){
	    addCustomer(database);
	}
	else if(response == 3){
	    database.printCustomers();
	}
	else{
	    cout << "Not a valid input. Please try again.\n\n";
	}
    }
}

//adds a customer to the database after a few prompts
void SalesFloor::addCustomer(Database &database){
    int pin;
    char input[300];
    string name;
    string address;
    
    //name and address
    cout << "\nEnter name:  ";
    //clear the channel
    cin.ignore(1000,'\n');
    cin.getline(input, 100);
    name = input;
    cout << "Enter current address: ";
    cin.getline(input,300);
    address = input;

    while(true){
	cout << "Enter desired pin: ";
	cin >> pin;
	if(cin.fail()){
	    cin.clear();
	    cin.ignore(400,'\n');
	    cout << "Bad input. ";
	    continue;
	}
	else if(database.checkPin(pin)){
	    cout << "That pin is already in use. ";
	    continue;
	}
	break;
    }   
   
    Customer customer(name, pin, address);
    database.addCustomer(customer);
    cout << "\n";
}

