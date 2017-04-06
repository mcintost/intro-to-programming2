/*********************************
**Thomas McIntosh
**June 28, 2016
**This is the header file for the Item class in a shopping cart program
**********************************/

#include "Item.h"

#ifndef LIST_H
#define LIST_H

class List 
{

private:
	Item **arr;
	int count;
	int capacity;
	void doubleSize();
	void removeAt(int ind);

public:
	List();
	void add();
	void remove();
	void display();
};

#endif