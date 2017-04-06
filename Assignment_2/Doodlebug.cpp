/*********************************************************************
** Program Filename: Assignment_2
** Author: Thomas McIntosh
** Date: 7/7/2016
** Description: Class file for the critter class in a predator-prey model.
** Input:
** Output:
*********************************************************************/

#include "Doodlebug.hpp"
#include <string>


Doodlebug::Doodlebug() 
{
	doodlebugType = 1;
	timeToBreedTicks = 0;
	critterBreedTicks = 8;
	timeToDeathTicks = 0;
	doodlebugDeathTicks = 3;
}

Doodlebug::Doodlebug(Critter *world[20][20], int x, int y)
{
	doodlebugType = 1;
	timeToBreedTicks = 0;
	critterBreedTicks = 8;
	timeToDeathTicks = 0;
	doodlebugDeathTicks = 3;
}

int Doodlebug::getType()
{
	return doodlebugType;
}

bool Doodlebug::breed()
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

int Doodlebug::move()
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

void Doodlebug::eat()
{
	timeToDeathTicks = 0;
}

bool Doodlebug::died()
{
	if (timeToDeathTicks == doodlebugDeathTicks)
	{
		return true;
	}
	else
	{
		timeToDeathTicks++;
		return false;
	}
}