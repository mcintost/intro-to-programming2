/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The header file for the Golum class that controls the
**character Gollum.
*********************************************************************/

#ifndef GOLUM_HPP
#define GOLUM_HPP

#include "Creature.hpp"
#include "Dice.hpp"
#include <string>

using std::string;

class Golum : public Creature
{
public:
	Golum();
	//~Golum();
	string getName();
	bool alive();
	void setName(string);
	int getStrength();
	void setStrength(int);
	int attack();
	int defense();
	int damageTaken(int);

private:
	int ringActivation;
	int strengthLeft;
	int armor;
	int strength;
	int damage;
	string name;
	Dice dice;
};
#endif // !GOLUM_HPP

