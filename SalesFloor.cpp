//maxwell Sanders 1001069652
//this serves as the menu for the customer and the SA

#include "SalesFloor.h"

//the mainMenu, needs customer info and the database and the storge for the catalogue
bool SalesFloor::CustomerMenu(Customer &customer, Database &database, Storage storage){
    int response = 1337;
    cout << "\nWelcome Beloved " << customer.getName() << "!!!!!\n";
    while(true){ 
        cout << "Select a response to continue\n";
	cout << "=============================\n";
	cout << "0 - Exit the program\n";
	cout << "1 - Logout\n";
	cout << "2 - Look at the catalogue\n";
	cout << "3 - Buy a robomodel\n";
	cout << "4 - Look at my orders\n";
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
	    storage.printCatalogue();
	    cout << "\n";
	}
	else if(response == 3){
	    cout << "\nWelcome to Order-Maker 5000\n";
	    cout << "===========================\n";
	    int MN;
	    int quantity;
	    int response;
	    storage.printCatalogue();
	    cout << "\nSelect a model from above\n";
	    cout << "=========================\n";
	    cout << "Your response: ";
	    cin >> response;
	    while(cin.fail() || response < 1 || response > storage.robomodelSize()){
		cin.clear();
		cin.ignore(400,'\n');
		cout << "Bad input. Try again.\n\n";
		storage.printCatalogue();
	    	cout << "\nSelect a model from above\n";
	    	cout << "=========================\n";
	    	cout << "Your response: ";
		cin >> response;
	    }
	    MN = storage.getRoboModel(response - 1).getMN();
	    cout << "\nHow many would you like: ";
	    cin >> quantity;
	    while(cin.fail()){
		cin.clear();
		cin.ignore(400,'\n');
		cout << "Bad input. Try again. How many would you like: ";
	    }	
	    Order order;
	    order.setModelNumber(MN);
	    order.setQuantity(quantity);
	    order.setCustomerPin(customer.getPin());
	    order.calculatePrice(storage);
	    database.addOrder(order);
	
	    cout << "The final price of that order will be " << order.getPrice() << " USD\n\n";
	}
	else if(response == 4){
	    database.printMyOrders(customer.getPin(), storage);
	}
	else{
	    cout << "That is not a valid response\n";
	}
    }
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
	cout << "4 - show the models we can sell to the customers\n";
	cout << "5 - create an order\n";
	cout << "6 - look at all the orders\n";
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
	else if(response == 4){
	    storage.printCatalogue();
	    cout << "\n";
	}
	else if(response == 5){
	    cout << "\nWelcome to Order-Maker 5000\n";
	    cout << "===========================\n";
	    int MN;
	    int quantity;
	    int response;
	    int pin;
	    storage.printCatalogue();
	    cout << "\nSelect a model from above\n";
	    cout << "=========================\n";
	    cout << "Your response: ";
	    cin >> response;
	    while(cin.fail() || response < 1 || response > storage.robomodelSize()){
		cin.clear();
		cin.ignore(400,'\n');
		cout << "Bad input. Try again.\n\n";
		storage.printCatalogue();
	    	cout << "\nSelect a model from above\n";
	    	cout << "=========================\n";
	    	cout << "Your response: ";
		cin >> response;
	    }
	    MN = storage.getRoboModel(response - 1).getMN();
	    cout << "\nHow many would you like: ";
	    cin >> quantity;
	    while(cin.fail()){
		cin.clear();
		cin.ignore(400,'\n');
		cout << "Bad input. Try again. How many would you like: ";
	    }	
	    database.printCustomers();
	    cout << "\nSelect a customer from above\n";
	    cout << "=========================\n";
	    cout << "Your response: ";
	    cin >> response;
	    while(cin.fail() || response < 1 || response > database.getCustomerSize()){
		cin.clear();
		cin.ignore(400,'\n');
		cout << "Bad input. Try again.\n\n";
		database.printCustomers();
	    	cout << "\nSelect a customer from above\n";
	    	cout << "=========================\n";
	    	cout << "Your response: ";
		cin >> response;
	    }
	    pin = database.loadCustomer(response - 1).getPin();	   
 
	    Order order;
	    order.setModelNumber(MN);
	    order.setQuantity(quantity);
	    order.setCustomerPin(pin);
	    order.calculatePrice(storage);
	    database.addOrder(order);
	
	    cout << "The final price of that order will be " << order.getPrice() << " USD\n\n";
	}
	else if(response == 6){
	    database.printOrders(storage);
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

