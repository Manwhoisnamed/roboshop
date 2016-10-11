//maxwell sanders 1001069652
//this is the header to the menu class

#include <iostream>

 #ifndef __MENU_H
 #define __MENU_H 2016
 class Menu{
	private:
	    int permissions;
	public:
	    Menu(){};
	    void setPerm(int perm);
	    int getPerm();
	    bool mainMenu(int perm);

 };
 #endif
