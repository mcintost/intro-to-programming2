/*********************************************************************
** Program Filename: Assignment_2
** Author: Thomas McIntosh
** Date: 7/7/2016
** Description: Class file for the critter class in a predator-prey model.
** Input:
** Output:
*********************************************************************/

#include "Critter.hpp"
#include "Ant.hpp"
#include "Doodlebug.hpp"

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	srand(time(0));
	int i, j;
	int x, y;
	const int worldSize = 20;
	int antCount = 0;
	int doodleBugCount = 0;
	const int initialAnts = 100;
	const int initialDoodlebugs = 10;
	const int doodlebugType = 1;
	const int antType = 2;
	std::string name;

	Critter* world[worldSize][worldSize];



	//Initialize the world to NULL
	for (int i = 0; i < worldSize; i++)
	{
		for (int j = 0; j < worldSize; j++)
		{
			world[i][j] = NULL;
		}
	}

	//Adds all the initial Ants into the world
	while (antCount < initialAnts)
	{
		int x = rand() % worldSize;
		int y = rand() % worldSize;
		if (world[x][y] == NULL)
		{
			Ant *a1 = new Ant;
			world[x][y] = a1;
			antCount++;

		}
	}

	//Adds all the initial Doodlebugs into the world
	while (doodleBugCount < initialDoodlebugs)
	{
		int x = rand() % worldSize;
		int y = rand() % worldSize;
		if (world[x][y] == NULL)
		{
			Doodlebug *d1 = new Doodlebug(world, x, y);
			world[x][y] = d1;
			doodleBugCount++;
		}
	}

	cout << endl;

while (true)
{
	//Sets the board for A (Ants), D (Doodlebugs) and - for enpty
	for (j = 0; j < worldSize; j++)
	{
		for (i = 0; i < worldSize; i++)
		{
			if (world[i][j] == NULL)
			{
				cout << " - ";
			}
			else if (world[i][j]->getType() == antType)
				cout << " A ";
			else
				cout << " D ";
		}
		cout << endl;
	}

	for (i = 0; i < worldSize; i++)
		for (j = 0; j < worldSize; j++)
		{
			//Movement for ant
			if ((world[i][j] != NULL) && (world[i][j]->getType() == antType))
			{
				if (world[i][j]->move() == 1)
				{
					if ((j > 0) && (world[i][j - 1] == NULL))
					{
						world[i][j - 1] = world[i][j];
						world[i][j] = NULL;
						j--;
					}
					else
						world[i][j]->move();
				}
				if (world[i][j]->move() == 2)
				{
					if ((j < worldSize - 1) && (world[i][j + 1] == NULL))
					{
						world[i][j + 1] = world[i][j];
						world[i][j] = NULL;
						j++;
					}
					else
						world[i][j]->move();
				}
				if (world[i][j]->move() == 3)
				{
					if ((i > 0) && (world[i - 1][j] == NULL))
					{
						world[i - 1][j] = world[i][j];
						world[i][j] = NULL;
						i--;
					}
					else
						world[i][j]->move();
				}
				if (world[i][j]->move() == 4)
				{
					if ((i < worldSize - 1) && (world[i + 1][j] == NULL))
					{
						world[i + 1][j] = world[i][j];
						world[i][j] = NULL;
						i++;
					}
					else
						world[i][j]->move();
				}
			}
			//Movement for Doodlebug
			//If Doodlebug moves onto an ant it eats the ant
			if ((world[i][j] != NULL) && (world[i][j]->getType() == doodlebugType))
			{
				if (world[i][j]->move() == 1)
				{
					if ((j > 0) && (world[i][j - 1] == NULL))
					{
						world[i][j - 1] = world[i][j];
						world[i][j] = NULL;
						j--;
					}
					else if ((j > 0) && (world[i][j - 1]->getType() == antType))
					{
						world[i][j - 1] = world[i][j];
						world[i][j - 1]->eat();
						world[i][j] = NULL;
						j--;
					}
					else
						world[i][j]->move();
				}
				if (world[i][j]->move() == 2)
				{
					if ((j < worldSize - 1) && (world[i][j + 1] == NULL))
					{
						world[i][j + 1] = world[i][j];
						world[i][j] = NULL;
						j++;
					}
					else if ((j < worldSize - 1) && (world[i][j + 1]->getType() == antType))
					{
						world[i][j + 1] = world[i][j];
						world[i][j + 1]->eat();
						world[i][j] = NULL;
						j++;
					}
					else
						world[i][j]->move();
				}
				if (world[i][j]->move() == 3)
				{
					if ((i > 0) && (world[i - 1][j] == NULL))
					{
						world[i - 1][j] = world[i][j];
						world[i][j] = NULL;
						i--;
					}
					else if ((i > 0) && (world[i - 1][j]->getType() == antType))
					{
						world[i - 1][j] = world[i][j];
						world[i - 1][j]->eat();
						world[i][j] = NULL;
						i--;
					}
					else
						world[i][j]->move();
				}
				if (world[i][j]->move() == 4)
				{
					if ((i < worldSize - 1) && (world[i + 1][j] == NULL))
					{
						world[i + 1][j] = world[i][j];
						world[i][j] = NULL;
						i++;
					}
					else if ((i < worldSize - 1) && (world[i + 1][j]->getType() == antType))
					{
						world[i + 1][j] = world[i][j];
						world[i + 1][j]->eat();
						world[i][j] = NULL;
						i++;
					}
					else
						world[i][j]->move();
				}
			}
		}
		//This loop reads the array to determine if the critter should die
		for (i = 0; i < worldSize; i++)
			for (j = 0; j < worldSize; j++)
			{
				if ((world[i][j] != NULL) && (world[i][j]->getType() == antType))
				{
					if (world[i][j]->died() == true)
						world[i][j] = NULL;
				}
				else if ((world[i][j] != NULL) && (world[i][j]->getType() == doodlebugType))
				{
					if (world[i][j]->died() == true)
						world[i][j] = NULL;
				}
			}

		//This loop reads the array to determine if the critter should breed
		//If it needs to breed it places its offspring in an available space around itself
		for (i = 0; i < worldSize; i++)
			for (j = 0; j < worldSize; j++)
			{
				if ((world[i][j] != NULL) && (world[i][j]->getType() == antType))
				{
					if (world[i][j]->breed() == true)
					{
						if ((j > 0) && (world[i][j - 1] == NULL))
						{
							Ant *newAnt = new Ant;
							world[i][j - 1] = newAnt;
						}

						else if ((j < worldSize - 1) && (world[i][j + 1] == NULL))
						{
							Ant *newAnt = new Ant;
							world[i][j + 1] = newAnt;
						}
						else if ((i > 0) && (world[i - 1][j] == NULL))
						{
							Ant *newAnt = new Ant;
							world[i - 1][j] = newAnt;
						}
						else if ((i < worldSize - 1) && (world[i + 1][j] == NULL))
						{
							Ant *newAnt = new Ant;
							world[i + 1][j] = newAnt;
						}
					}
				}
				if ((world[i][j] != NULL) && (world[i][j]->getType() == doodlebugType))
				{
					if (world[i][j]->breed() == true)
					{
						if ((j > 0) && (world[i][j - 1] == NULL))
						{
							Doodlebug *newDoodlebug = new Doodlebug;
							world[i][j - 1] = newDoodlebug;
						}

						else if ((j < worldSize - 1) && (world[i][j + 1] == NULL))
						{
							Doodlebug *newDoodlebug = new Doodlebug;
							world[i][j + 1] = newDoodlebug;
						}
						else if ((i > 0) && (world[i - 1][j] == NULL))
						{
							Doodlebug *newDoodlebug = new Doodlebug;
							world[i - 1][j] = newDoodlebug;
						}
						else if ((i < worldSize - 1) && (world[i + 1][j] == NULL))
						{
							Doodlebug *newDoodlebug = new Doodlebug;
							world[i + 1][j] = newDoodlebug;
						}
					}
				}
				
			}

		cout << endl;
		getline(cin, name);

	}
	cin.get();
	cin.ignore();
}