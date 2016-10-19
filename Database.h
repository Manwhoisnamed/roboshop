//maxwell Sanders 1001069652
//The database will be used to hold customer info and in the future SA info

#include "Customer.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

 #ifndef __DATABASE_H
 #define __DATABASE_H 2016
class Database{
    private:
	vector<Customer> customers;
    public:
	Database(){};
	void printCustomers();
	Customer loadCustomer(int i);
	void addCustomer(Customer customer);
	bool checkPin(int pin);
	Customer loadCustomerPin(int pin);
	void saveData();
	void loadData();
};
#endif
