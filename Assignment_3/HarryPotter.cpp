/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The class file for the HarryPotter class that controls 
** the character Harry Potter.
*********************************************************************/

#include "HarryPotter.hpp"
#include "Creature.hpp"
#include "Dice.hpp"
#include <iostream>

using std::cout;
using std::endl;

HarryPotter::HarryPotter()
{
	name = "Harry Potter";
	armor = 0;
	strength = 10;
	lives = 1;
}

string HarryPotter::getName()
{
	return name;
}

void HarryPotter::setName(string name)
{
	this->name = name;
}

int HarryPotter::getStrength()
{
	return strength;
}

void HarryPotter::setStrength(int strength)
{
	this->strength = strength;
}

//Determines the value of the attack.
int HarryPotter::attack()
{
	return dice.roll(6, 2);
}

//Determines the value of the defense.
int HarryPotter::defense()
{
	return dice.roll(6, 1);
}

/***************************************************************************
**Function that takes in the damage dealt from the other character and    **
**subtracts from it the armor value and the remainder is subtracted from  **
**this characters remaining strength.                                     **
***************************************************************************/
int HarryPotter::damageTaken(int damage)
{
	if (damage <= armor)
	{
		cout << "Harry Potter used his cloak to take no damage." << endl;
		return strength;
	}//If Harry Potter does not take damage. 

	else if (damage > armor)
	{
		//Harry Potter's special skill allows him to regenerate to full health.
		//This is the if statement to determine if it should activate. 
		if (lives == 1)
		{
			strength -= damage - armor;
			if (strength <= 0)
			{
				cout << "Harry Potter has been revived from the magic found in Hogwarts. " << endl;
				strength = 10;
				lives = 0;
			}//If Harry Potter runs out of strength the first time.
			return strength;
		}//If, Harry Potter has 1 life left.

		else if (lives == 0)
		{
			strength -= damage - armor;
			if (strength <= 0)
			{
				strength = 0;
			}//If Harry Potter runs out of strength the second time.
			return strength;
		}//Else if, Harry Potter has no lives left.
	}//Else if, Damage was high enough to deal damage.
}

//Determines if the character is still alive.
bool HarryPotter::alive()
{
	if (strength == 0)
		return false;
	else
		return true;
}//Checks to determine that Harry Potter is still alive.