/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The header file for the Medusa class that controls the
**character Medusa.
*********************************************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Creature.hpp"
#include "Dice.hpp"
#include <string>

using std::string;

class Medusa : public Creature
{
public:
	Medusa();
	//~Medusa();
	string getName();
	bool alive();
	void setName(string);
	int getStrength();
	void setStrength(int);
	int attack();
	int defense();
	int damageTaken(int);

private:
	int strengthLeft;
	int armor;
	int strength;
	int damage;
	int glareCheck;
	string name;
	Dice dice;
};
#endif // !MEDUSA_HPP