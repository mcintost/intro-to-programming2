/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The class file for the space class in
** a beach exploration game with a timer.
*********************************************************************/

#include "Space.hpp"
#include <iostream>
#include <string>

Space::Space(const std::string name1)
{
	player = NULL;
	name = name1;
}

//Allows the player to move 
Space* Space::move(Space* current, int direction)
{
	if (direction == 1)
	{
		return current->getNorth();
		player = current->getNorth();
	}
	if (direction == 2)
	{
		return current->getSouth();
		player = current->getSouth();
	}
	if (direction == 3)
	{
		return current->getEast();
		player = current->getEast();
	}
	if (direction == 4)
	{
		return current->getWest();
		player = current->getWest();
	}
}

Space* Space::getNorth()
{
	return north;
}

Space* Space::getSouth()
{
	return south;
}

Space* Space::getEast()
{
	return east;
}

Space* Space::getWest()
{
	return west;
}

void Space::setNorth(Space* next)
{
	north = next;
	player = next;
}

void Space::setSouth(Space* next)
{
	south = next;
	player = next;
}

void Space::setEast(Space* next)
{
	east = next;
	player = next;
}

void Space::setWest(Space* next)
{
	west = next;
	player = next;
}

void Space::setHead(Space* next)
{
	head = next;
	player = head;
}

std::string Space::getName()
{
	return name;
}

Space* Space::getPlayer()
{
	return player;
}

void Space::setPlayer(Space* current)
{
	player = current;
}