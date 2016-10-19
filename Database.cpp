//maxwell Sanders 1001069652
//this database holds customer and order info, and in the future SA info

#include "Database.h"


void Database::printCustomers(){
    int i = 0, size = Database::customers.size();
    cout << "\nViewing all the Customers\n";
    cout << "=========================\n";
    for(i = 0; i < size; i ++){
	cout << i + 1 << " - Name: " << Database::customers.at(i).getName() << "\n";
	cout << "    Address: " << Database::customers.at(i).getAddress() << "\n";
	cout << "    Pin: " << Database::customers.at(i).getPin() << "\n";
        cout << "\n";
    }
    cout << "\n";
}

Customer Database::loadCustomer(int i){
	return Database::customers.at(i);
}

Customer Database::loadCustomerPin(int pin){
    int i = 0;
    for(i = 0; i < Database::customers.size(); i ++){
	if(customers.at(i).getPin() == pin){
	    return customers.at(i);
	}
    }
}

void Database::addCustomer(Customer customer){
	Database::customers.push_back(customer);
}

bool Database::checkPin(int pin){
    int i = 0;
    for(i = 0; i < Database::customers.size(); i ++){
	if(customers.at(i).getPin() == pin){
	    return true;
	}
    }
    return false;
}

void Database::saveData(){
    int i = 0;
    ofstream myfile("Database.txt");
    for(i = 0; i < Database::customers.size(); i ++){
	myfile << customers.at(i).getName() << "\n";
	myfile << customers.at(i).getPin() << "\n";
	myfile << customers.at(i).getAddress() << "\n";	
    }
    myfile << "-1\n";
    myfile.close();
}

void Database::loadData(){
    ifstream myfile("Database.txt");
    string line, name, address;
    int pin;
    while(true){
	getline(myfile,name);
	if(name == "-1"){
	    break;
	}
	getline(myfile, line);
	istringstream iss(line);
	iss >> pin;
	getline(myfile, address);
	Customer customer(name, pin, address);
	Database::customers.push_back(customer);
    }
    myfile.close();
}
