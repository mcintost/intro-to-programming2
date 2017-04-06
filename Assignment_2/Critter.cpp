/*********************************************************************
** Program Filename: Assignment_2
** Author: Thomas McIntosh
** Date: 7/7/2016
** Description: Class file for the critter class in a predator-prey model.
** Input:
** Output:
*********************************************************************/

#include "Critter.hpp"
#include <string>


Critter::Critter()
{
	worldsize = 20;
	movedAlready = false;
	timeToBreedTicks = 0;
	timeToDeathTicks = 0;
	x = 0;
	y = 0;
}

Critter::~Critter() {}

Critter::Critter(Critter *world[20][20], int x, int y)
{}

int Critter::getType()
{
	return 0;
}

void Critter::setMovedAlready(bool moved)
{
	movedAlready = moved;
}

bool Critter::getMovedAlready()
{
	return movedAlready;
}

bool Critter::breed()
{
	timeToBreedTicks++;
	if (timeToBreedTicks == critterBreedTicks)
	{
		return true;
		critterBreedTicks = 0;
	}
	else
		return false;
}

int Critter::move()
{

	//Try to move up 
	int dir = rand() % 4;

	if (dir == 0)
	{
		return 1;
	}
	//Try to move down
	else if (dir == 1)
	{
		return 2;
	}
	//Try to move left
	else if (dir == 2)
	{
		return 3;
	}
	else
	{
		return 4;
	}

}

bool Critter::died()
{
	if (timeToDeathTicks == critterDeathTicks)
		return true;

	else
	{
		timeToDeathTicks++;
		return false;
	}
}

void Critter::eat()
{}