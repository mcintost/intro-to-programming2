/*********************************************************************
** Program Filename: Assignment_2
** Author: Thomas McIntosh
** Date: 7/7/2016
** Description: Class file for the critter class in a predator-prey model.
** Input:
** Output:
*********************************************************************/

#include "Ant.hpp"
#include <string>


Ant::Ant()
{
	antType = 2;
	timeToDeathTicks = 0;
	timeToBreedTicks = 0;
	critterBreedTicks = 3;
	antDeathTicks = 10;
}

Ant::Ant(Critter *world[20][20], int x, int y)
{
	antType = 2;
	timeToDeathTicks = 0;
	timeToBreedTicks = 0;
	critterBreedTicks = 3;
	antDeathTicks = 10;
}


int Ant::getType()
{
	return antType;
}

bool Ant::breed()
{
	timeToBreedTicks++;

	if (timeToBreedTicks == critterBreedTicks)
	{
		timeToBreedTicks = 0;
		return true;
	}
	else
		return false;
}

int Ant::move()
{
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
}

bool Ant::died()
{
	if (timeToDeathTicks == antDeathTicks)
		return true;
	else
		timeToDeathTicks++;
		return false;
}