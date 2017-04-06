/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The header file for the virtual class creature that all 
**characters are derived from.
*********************************************************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP

#include "Dice.hpp"
#include <string>

class Creature
{
public:
	Creature();
	virtual ~Creature() {};
	virtual int attack() = 0;
	virtual int defense() = 0;
	virtual int damageTaken(int) = 0;
	virtual bool alive() = 0;
	virtual int getStrength() = 0;
	virtual std::string getName() = 0;
private:

protected:
};

#endif // !CREATURE_HPP