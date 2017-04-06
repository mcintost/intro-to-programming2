/*********************************
**Thomas McIntosh
**June 28, 2016
**This is the header file for the Item class in a shopping cart program
**********************************/

#include <iostream>
#include <string>

using std::string;

#ifndef ITEM_H
#define ITEM_H

class Item 
{
private:
	std::string name;
	std::string unit;
	int num;
	double unit_price;
public:
	Item();
	Item(std::string, std::string, int, double);

	void setname(std::string name);
	void setUnit(std::string unit);
	void setNumbers(int num);
	void setUnitPrice(double price);

	std::string getName();
	std::string getUnit();
	int getNumbers();
	double getUnitPrice();
};

#endif