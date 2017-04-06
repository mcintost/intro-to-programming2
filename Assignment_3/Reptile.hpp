/*********************************************************************
** Program Filename: Assignment_3                                      
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The header file for the Reptile class that controls 
** the character Reptile.
*********************************************************************/

#ifndef REPTILE_HPP
#define REPTILE_HPP
#include "Creature.hpp"
#include "Dice.hpp"
#include <string>

using std::string;

class Reptile : public Creature
{
public:
	Reptile();
	//~Reptile();
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
#endif // !REPTILE_HPP


