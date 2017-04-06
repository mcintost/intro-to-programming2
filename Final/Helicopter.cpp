/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The class file for the helicopter class in
** a beach exploration game with a timer.
*********************************************************************/

#include "Helicopter.hpp"

Helicopter::Helicopter(const std::string name1)
{
	name = name1;
	action = false;
}

//Allows the player to move 
Helicopter* Helicopter::move(Helicopter* current, int direction)
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

Helicopter* Helicopter::getNorth()
{
	return north;
}

Helicopter* Helicopter::getSouth()
{
	return south;
}

Helicopter* Helicopter::getEast()
{
	return east;
}

Helicopter* Helicopter::getWest()
{
	return west;
}

void Helicopter::setNorth(Helicopter* next)
{
	north = next;
	player = next;
}

void Helicopter::setSouth(Helicopter* next)
{
	south = next;
	player = next;
}

void Helicopter::setEast(Helicopter* next)
{
	east = next;
	player = next;
}

void Helicopter::setWest(Helicopter* next)
{
	west = next;
	player = next;
}

std::string Helicopter::getName()
{
	return name;
}

//Player has chosen to look around 
void Helicopter::specialAction()
{
	std::cout << "You made it to the escape helicopter." << std::endl;
	std::cout << "Enter your three keys into the dash board." << std::endl;
	std::cout << "1. Enter your keys" << std::endl;
	std::cin >> leave;
	do {
		if (leave != 1 || std::cin.fail())
		{
			std::cin.clear();
			std::cin.get();
			std::cout << "Please enter a valid input." << std::endl;
			std::cin >> leave;
		}
		else if (leave == 1)
		{
			action = true;
		}
	} while (leave != 1 && leave != 2);
}

bool Helicopter::getAction()
{
	return action;
}