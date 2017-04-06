/*******************************
**Thomas McIntosh
**June, 26 ,2016
**CS_162 This is the Die header file for a program that rolls 4 dice;
**			2 normal and 2 loaded with a 20% chance to incease a nonmax roll by 1
*******************************/

#ifndef Die_hpp
#define Die_hpp

class Dice
{

public:
	Dice();
	int roll();

protected:
	int lastRoll;
	const int sideDie;
};

#endif // !Die_hpp

