/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The class file for the BlueMen class that controls the
**character Blue Men.
*********************************************************************/

#include "BlueMen.hpp"
#include "Creature.hpp"
#include "Dice.hpp"
#include <iostream>

using std::cout;
using std::endl;

BlueMen::BlueMen()
{
	name = "BlueMen";
	armor = 3;
	strength = 12;
}

string BlueMen::getName()
{
	return name;
}

void BlueMen::setName(string name)
{
	this->name = name;
}

int BlueMen::getStrength()
{
	return strength;
}

void BlueMen::setStrength(int strength)
{
	this->strength = strength;
}

//Determines the value of the attack.
int BlueMen::attack()
{
	return dice.roll(10, 2);
}

/*******************************************************
*Blue Men lose 1 dice roll for defense every four      *
* strength lost.  The defense function determines this *
*through the use of if statements.                     *
*******************************************************/
int BlueMen::defense()
{
	if (strength > 8)
	{
		return dice.roll(6, 3);
	}
	else if (strength > 4)
	{
		return dice.roll(6, 2);
	}
	else
	{
		return dice.roll(6, 1);
	}
}

/***************************************************************************
**Function that takes in the damage dealt from the other character and    **
**subtracts from it the armor value and the remainder is subtracted from  **
**this characters remaining strength.                                     **
***************************************************************************/
int BlueMen::damageTaken(int damage)
{
	if (damage <= armor)
	{
		cout << "The Blue Men were too fast you did no damage." << endl;
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
bool BlueMen::alive()
{
	if (strength == 0)
		return false;
	else
		return true;
}