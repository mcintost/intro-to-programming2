/*********************************************************************
** Program Filename: Assignment_2
** Author: Thomas McIntosh
** Date: 7/7/2016
** Description: Class file for the critter class in a predator-prey model.
** Input:
** Output:
*********************************************************************/

#ifndef Ant_hpp
#define Ant_hpp
#include "Critter.hpp"
#include <string>

class Ant : public Critter
{

public:
	Ant();
	Ant(Critter *world[20][20], int, int);
	int move();
	int getType();
	bool breed();
	bool died();

private:
	int x;
	int y;
	int antType;
	int timeToDeathTicks;
	int timeToBreedTicks;
	int critterBreedTicks;
	int antDeathTicks;
};
#endif // !Ant_hpp