/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The class file for the shore class in
** a beach exploration game with a timer.
*********************************************************************/

#include "Shore.hpp"

Shore::Shore(const std::string name1)
{
	head = NULL;
	name = name1;
	action = false;
	shell = false;
}

//Allows the player to move 
Shore* Shore::move(Shore* current, int direction)
{
	if (direction == 1)
		return current->getNorth();
	if (direction == 2)
		return current->getSouth();
	if (direction == 3)
		return current->getEast();
	if (direction == 4)
		return current->getWest();
}

Shore* Shore::getPlayer()
{
	return player;
}

Shore* Shore::getNorth()
{
	return north;
}

Shore* Shore::getSouth()
{
	return south;
}

Shore* Shore::getEast()
{
	return east;
}

Shore* Shore::getWest()
{
	return west;
}

void Shore::setNorth(Shore* next)
{
	north = next;
	player = next;
}

void Shore::setSouth(Shore* next)
{
	south = next;
	player = next;
}

void Shore::setEast(Shore* next)
{
	east = next;
	player = next;
}

void Shore::setWest(Shore* next)
{
	west = next;
	player = next;
}

void Shore::setHead(Shore* next)
{
	head = next;
	player = head;
}

std::string Shore::getName()
{
	return name;
}

//Player has chosen to look around 
void Shore::specialAction()
{
	std::cout << "The water is coming up close to you." << std::endl;
	std::cout << "There is something shiny out in the " << std::endl;
	std::cout << "water would you like to wade out to " << std::endl;
	std::cout << "see what it is?" << std::endl;
	std::cout << "1. Yes." << std::endl;
	std::cout << "2. No. " << std::endl;
	std::cin >> wade;
do{
	if (wade != 1 && wade != 2 || std::cin.fail())
	{
		std::cin.clear();
		std::cin.get();
		std::cout << "Please enter a valid input." << std::endl;
		std::cin >> wade;
	}
	else if (wade == 1)
	{
		action = true;
	}
	else
		std::cout << "You have chosen to make no action" << std::endl;
} while (wade != 1 && wade != 2);

if (wade == 1)
{
	std::cout << "There is also a large shell in the water would you like to grab it?" << std::endl;
	std::cout << "1. Yes." << std::endl;
	std::cout << "2. No. " << std::endl;

	std::cin >> pickup;

	do {
		if (pickup != 1 && pickup != 2 || std::cin.fail())
		{
			std::cin.clear();
			std::cin.get();
			std::cout << "Please enter a valid input." << std::endl;
			std::cin >> pickup;
		}
		else if (pickup == 1)
		{
			shell = true;
		}
		else
			std::cout << "You have chosen to leave the rock" << std::endl;

	} while (pickup != 1 && pickup != 2);
}

}

bool Shore::getAction()
{
	return action;
}

bool Shore::getShell()
{
	return shell;
}
