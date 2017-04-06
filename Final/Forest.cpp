/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The class file for the forest class in
** a beach exploration game with a timer.
*********************************************************************/

#include "Forest.hpp"

Forest::Forest(const std::string name1)
{
	name = name1;
	action = false;
}

//Allows the player to move 
Forest* Forest::move(Forest* current, int direction)
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

Forest* Forest::getNorth()
{
	return north;
}

Forest* Forest::getSouth()
{
	return south;
}

Forest* Forest::getEast()
{
	return east;
}

Forest* Forest::getWest()
{
	return west;
}

void Forest::setNorth(Forest* next)
{
	north = next;
	player = next;
}

void Forest::setSouth(Forest* next)
{
	south = next;
	player = next;
}

void Forest::setEast(Forest* next)
{
	east = next;
	player = next;
}

void Forest::setWest(Forest* next)
{
	west = next;
	player = next;
}

std::string Forest::getName()
{
	return name;
}

//Player has chosen to look around 
void Forest::specialAction()
{
	std::cout << "You see something shiny up in a tree. The tree does " << std::endl;
	std::cout << "not seem as though you can climb it... " << std::endl;
	std::cout << "Would you like to thrw your shell up there and try " << std::endl;
	std::cout << "to knock it down?" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;
	std::cin >> thrw;
	do {
		if (thrw != 1 && thrw != 2 || std::cin.fail())
		{
			std::cin.clear();
			std::cin.get();
			std::cout << "Please enter a valid input." << std::endl;
			std::cin >> thrw;
		}
		else if (thrw == 1)
		{
			action = true;
		}
		else
			std::cout << "You have chose to make no action" << std::endl;
	} while (thrw != 1 && thrw != 2);
}

bool Forest::getAction()
{
	return action;
}