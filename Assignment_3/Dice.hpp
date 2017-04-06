/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The header file for dice class used to determine 
** the values of characters attack, defense, and attack order.
*********************************************************************/

#ifndef DICE_HPP
#define DICE_HPP

class Dice
{

public:
	Dice();
	Dice(int, int);
	int roll();
	int roll(int, int);
	int getDieSides();
	void setDieSides(int);
	int getNumofRolls();
	void setNumofRoll(int);

private:
	int total;
	int numofRolls;
	int side;
	int sideDie;
	int lastRoll;
};

#endif // !1