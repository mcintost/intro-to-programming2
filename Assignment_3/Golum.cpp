/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The class file for the Golum class that controls the
**character Gollum.
*********************************************************************/

#include "Golum.hpp"
#include "Creature.hpp"
#include "Dice.hpp"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

Golum::Golum()
{
	name = "Gollum";
	armor = 3;
	strength = 8;
}

string Golum::getName()
{
	return name;
}

void Golum::setName(string name)
{
	this->name = name;
}

int Golum::getStrength()
{
	return strength;
}

void Golum::setStrength(int strength)
{
	this->strength = strength;
}

/****************************************************************
**Gollum's attack is determined by a single d6 die. There is a ** 
**five percent chance that his attack is determined by a three ** 
**d6 dice though.  This is determined in this function with    **
**the attack value being returned.                             **
****************************************************************/
int Golum::attack()
{
	ringActivation = (rand() % 20) + 1;
	if (ringActivation == 1)
	{
		cout << "Gollum activates the ring and gets an attack bonus" << endl;
		return dice.roll(6, 3);
	}
	else
		return dice.roll(6, 1);
}

//Determines the value of the defense.
int Golum::defense()
{
	return dice.roll(6, 1);
}

/***************************************************************************
**Function that takes in the damage dealt from the other character and    **
**subtracts from it the armor value and the remainder is subtracted from  **
**this characters remaining strength.                                     **
***************************************************************************/
int Golum::damageTaken(int damage)
{
	if (damage <= armor)
	{
		cout << "Gollum evaded your attack." << endl;
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
bool Golum::alive()
{
	if (strength == 0)
		return false;
	else
		return true;
}