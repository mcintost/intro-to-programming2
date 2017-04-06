/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The class file for dice class used to determine
** the values of characters attack, defense, and attack order.
*********************************************************************/

#include "Dice.hpp"
#include <cstdlib>
#include <iostream>


//Dice Constructor, changing the sideDie vairable will change the number
//of sides for both the normal and loaded dice
Dice::Dice() 
{
	lastRoll = 0;
	sideDie = 6;
}

Dice::Dice(int sideDie, int numofRolls)
{
	this->sideDie = sideDie;
	this->numofRolls = numofRolls;
}

//Roll functions that takes no arguments
int Dice::roll()
{
	lastRoll = 0;
	total = 0;
	for (int rolls = 0; rolls < numofRolls; rolls++)
	{
		lastRoll = (rand() % sideDie) + 1;
		//lastRoll = 1;
		total += lastRoll;
	}
	return total;
}

/*************************************************
**Roll function that takes the number of        **  
**sides of the dice and number of rolls as      **  
**paramaters allowing for a single dice object  **
**being created.                                **
*************************************************/
int Dice::roll(int sideDie, int numofRolls)
{
	lastRoll = 0;
	total = 0;
	for (int rolls = 0; rolls < numofRolls; rolls++)
	{
		lastRoll = (rand() % sideDie) + 1;
		//lastRoll = 1;
		total += lastRoll;
	}
	return total;
}


void Dice::setDieSides(int sideDie)
{
	this-> sideDie = sideDie;
}

int Dice::getDieSides()
{
	return sideDie;
}

void Dice::setNumofRoll(int numofRolls)
{
	this->numofRolls = numofRolls;
}

int Dice::getNumofRolls()
{
	return numofRolls;
}