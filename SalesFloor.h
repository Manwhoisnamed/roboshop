//maxwell Sanders 1001069652
//this is the menus for the salesmen and customers

#include <iostream>
#include <string>
#include "Database.h"
#include "Storage.h"

using namespace std;

#ifndef __SalesFloor_H
#define __SalesFloor_H 2016
class SalesFloor{
    private:

    public:
	SalesFloor(){};
        bool CustomerMenu(Customer &customer, Database &database, Storage storage);
	void addCustomer(Database &database);
	bool SAMenu(Database &database, Storage storage);
};
#endif
