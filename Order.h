
//maxwell Sanders 1001069652
//this is the customer class it holds customer credentials

#include <string>
#include "RoboModel.h";

using namespace std;

#ifndef __CUSTOMER_H
#define __CUSTOMER_H 2016
class Order{
    private:
	int Customerpin;
	int ModelNumber;
	int quantity;
    public:
	Order order(){};

	//getters
	int getCustomerPin();
	int getquantity();
	int getModelNumber();
	
	//setters
	void setCustomerPin(int pin);
	void setQuantity(int num);
	void setModelNumber(int MN);
	
};
#endif
