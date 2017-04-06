/*********************************************************************
** Program Filename: Assignment_2
** Author: Thomas McIntosh
** Date: 7/7/2016
** Description: Class file for the critter class in a predator-prey model.
** Input:
** Output:
*********************************************************************/

#ifndef Doodlebug_hpp
#define Doodlebug_hpp
#include "Critter.hpp"
#include <string>

class Doodlebug : public Critter
{

public:
	Doodlebug();
	Doodlebug(Critter *world[20][20], int, int);
	bool breed();
	void eat();
	bool died();
	int move();
	int getType();

private:
	int x;
	int y;
	int doodlebugType;
	int timeToBreedTicks;
	int critterBreedTicks;
	int timeToDeathTicks;
	int doodlebugDeathTicks;
};

#endif // !Doodlebug_hpp#pragma once
