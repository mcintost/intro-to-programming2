/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The class file for the beach class in
** a beach exploration game with a timer.
*********************************************************************/

#include "Beach.hpp"

Beach::Beach(const std::string name1)
{
	head = NULL;
	name = name1;
	action = false;
}

//Allows the player to move 
Beach* Beach::move(Beach* current, int direction)
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

Beach* Beach::getPlayer()
{
	return player;
}

Beach* Beach::getNorth()
{
	return north;
}

Beach* Beach::getSouth()
{
	return south;
}

Beach* Beach::getEast()
{
	return east;
}

Beach* Beach::getWest()
{
	return west;
}

void Beach::setNorth(Beach* next)
{
	north = next;
	player = next;
}

void Beach::setSouth(Beach* next)
{
	south = next;
	player = next;
}

void Beach::setEast(Beach* next)
{
	east = next;
	player = next;
}

void Beach::setWest(Beach* next)
{
	west = next;
	player = next;
}

void Beach::setHead(Beach* next)
{
	head = next;
	player = head;
}

std::string Beach::getName()
{
	return name;
}

//Player has chosen to look around 
void Beach::specialAction()
{
	std::cout << "You find yourself on the beach surrounded by sand." << std::endl;
	std::cout << "You see something sticking out of the sand." << std::endl;
	std::cout << "It appears as though you can dig it out." << std::endl;
	std::cout << "Would you like to try and dig?" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;
	std::cin >> dig;
	do{
		if (dig != 1 && dig != 2 || std::cin.fail())
		{
			std::cin.clear();
			std::cin.get();
			std::cout << "Please enter a valid input." << std::endl;
			std::cin >> dig;
		}
		else if (dig == 1)
		{
			action = true;
		}
		else
			std::cout << "You have chose to make no action" << std::endl;
	} while (dig != 1 && dig != 2);
}

bool Beach::getAction()
{
	return action;
}