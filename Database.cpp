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
    }
}

Customer Database::loadCustomer(int i){
	return Database::customers.at(i);
}

void Database::addCustomer(Customer customer){
	Database::customers.push_back(customer);
}
