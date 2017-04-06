/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The class file for the player class in
** a beach exploration game with a timer.
*********************************************************************/

#include "Player.hpp"
#include "Space.hpp"
#include <iostream>

Player::Player()
{
	itemCount = 0;
	parachute = false;
	key1 = false;
	key2 = false;
	key3 = false;
	shell = false;
}

//Keeps count of player items
void Player::bagCount()
{
	if (itemCount >= 4)
		std::cout << "The bag is now full" << std::endl << std::endl;
	else if (itemCount == 1)
		std::cout << "You still have room in your bag you have " << itemCount << " item so far" << std::endl << std::endl;
	else
		std::cout << "You still have room in your bag you have " << itemCount << " items so far" << std::endl << std::endl;
}

//Decreases the players item count if an item is used.
void Player::usedItem()
{
	itemCount--;
}

void Player::getParachute()
{
	parachute = true;
	itemCount++;
}
bool Player::hasParachute()
{
	return parachute;
}

void Player::getkey1()
{
	key1 = true;
	itemCount++;
}

bool Player::haskey1()
{
	return key1;
}

void Player::getkey2()
{
	key2 = true;
	itemCount++;
}

bool Player::haskey2()
{
	return key2;
}

void Player::getkey3()
{
	key3 = true;
	itemCount++;
}

bool Player::haskey3()
{
	return key3;
	itemCount++;
}

void Player::getShell()
{
	shell = true;
	itemCount++;
}

bool Player::hasShell()
{
	return shell;
	itemCount++;
}