/*********************************
**Thomas McIntosh
**June 28, 2016
**This is the class file for the Item class in a shopping cart program
**********************************/

//Item.cpp

#include "Item.h"
#include <string>
#include <iostream>

using std::string;

Item::Item(std::string nameIn, std::string unitIn, int numIn, double priceIn)
{
	name = nameIn;
	unit = unitIn;
	num = numIn;
	unit_price = priceIn;
}

Item::Item() 
{
	name = "";
	unit = "";
	num = 0;
	unit_price = 0;
}

void Item::setname(std::string nameIn)
{
	name = nameIn;
}
void Item::setUnit(std::string unitIn)
{
	unit = unitIn;
}
void Item::setNumbers(int numIn)
{
	num = numIn;
}
void Item::setUnitPrice(double priceIn)
{
	unit_price = priceIn;
}
std::string Item::getName() 
{
	return name;
}
std::string Item::getUnit()
{
	return unit;
}
int Item::getNumbers()
{
	return num;
}
double Item::getUnitPrice()
{
	return unit_price;
}