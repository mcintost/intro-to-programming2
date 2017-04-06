/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The class file for the Reptile class that controls the
**character Reptile.
*********************************************************************/

#include "Reptile.hpp"
#include "Creature.hpp"
#include "Dice.hpp"
#include <iostream>

using std::cout;
using std::endl;

Reptile::Reptile()
{
	name = "Reptile";
	armor = 7;
	strength = 18;
}

string Reptile::getName()
{
	return name;
}

void Reptile::setName(string name)
{
	this->name = name;
}

int Reptile::getStrength()
{
	return strength;
}

void Reptile::setStrength(int strength)
{
	this-> strength = strength;
}

//Determines the value of the attack.
int Reptile::attack()
{
	return dice.roll(6, 3);
}

//Determines the value of the defense.
int Reptile::defense()
{
	return dice.roll(6, 1);
}

/***************************************************************************
**Function that takes in the damage dealt from the other character and    **
**subtracts from it the armor value and the remainder is subtracted from  **
**this characters remaining strength.                                     **
***************************************************************************/
int Reptile::damageTaken(int damage)
{
	if (damage <= armor)
	{
		cout << "That was to weak. Reptile laughs at your attempt." << endl;
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
bool Reptile::alive()
{
	if (strength == 0)
		return false;
	else
		return true;
}