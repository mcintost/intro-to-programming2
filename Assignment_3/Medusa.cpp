/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The class file for the Medusa class that controls the
**character Medusa.
*********************************************************************/

#include "Medusa.hpp"
#include "Creature.hpp"
#include "Dice.hpp"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

Medusa::Medusa()
{
	name = "Medusa";
	armor = 2;
	strength = 8;
}

string Medusa::getName()
{
	return name;
}

void Medusa::setName(string name)
{
	this->name = name;
}

int Medusa::getStrength()
{
	return strength;
}

void Medusa::setStrength(int strength)
{
	this->strength = strength;
}

/****************************************************
**Returns attack value. If the max roll of 12 is   **
**rolled then Medusa instantly wins.  This is done **
**by returnins an attack of 1000.                  **
****************************************************/
int Medusa::attack()
{
	int glareCheck = dice.roll(6, 2);
	if (glareCheck == 12)
	{
		cout << "Medusa turned you to stone!" << endl;
		return 1000;
	}
	else
		return glareCheck;
}

//Determines the value of the defense.
int Medusa::defense()
{
	return dice.roll(6, 1);
}

/***************************************************************************
**Function that takes in the damage dealt from the other character and    **
**subtracts from it the armor value and the remainder is subtracted from  **
**this characters remaining strength.                                     **
***************************************************************************/
int Medusa::damageTaken(int damage)
{
	if (damage <= armor)
	{
		cout << "Medusa is too good for that weak attack!" << endl;
		return strength;
	}

	else if (damage > armor)
	{
		strength -= damage - armor;
		if (strength <= 0)
		{
			strength = 0;
		}
		return strength;
	}
}

//Determines if the character is still alive.
bool Medusa::alive()
{
	if (strength == 0)
		return false;
	else
		return true;
}