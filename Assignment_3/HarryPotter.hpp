/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The header file for the HarryPotter class that controls
** the character Harry Potter.
*********************************************************************/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "Creature.hpp"
#include "Dice.hpp"
#include <string>

using std::string;

class HarryPotter : public Creature
{
public:
	HarryPotter();
	//~HarryPotter();
	string getName();
	bool alive();
	void setName(string);
	int getStrength();
	void setStrength(int);
	int attack();
	int defense();
	int damageTaken(int);

private:
	int lives;
	int strengthLeft;
	int armor;
	int strength;
	int damage;
	string name;
	Dice dice;
};
#endif // !HARRYPOTTER_HPP