//maxwell Sanders 1001069652
//this is the menus for the salesmen and customers

#include <iostream>
#include <string>
#include "Database.h"

using namespace std;

#ifndef __SalesFloor_H
#define __SalesFloor_H 2016
class SalesFloor{
    private:

    public:
	SalesFloor(){};
        int mainMenu(int permissions, Database database);
	Database addCustomer(Database database);

};
#endif
