/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The header file for the BlueMen class that controls the
**character Blue Men.
*********************************************************************/

#ifndef BLUEMEN_CPP
#define BLUEMEN_CPP

#include "Creature.hpp"
#include "Dice.hpp"
#include <string>

using std::string;

class BlueMen : public Creature
{
public:
	BlueMen();
	//~BlueMen();
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
	string name;
	Dice dice;
};
#endif // !BLUEMEN_CPP
