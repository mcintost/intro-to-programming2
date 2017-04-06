/*********************************************************************
** Program Filename: Assignment_2
** Author: Thomas McIntosh
** Date: 7/7/2016
** Description: Class file for the critter class in a predator-prey model.
** Input:
** Output:
*********************************************************************/

#ifndef Critter_hpp
#define Critter_hpp
#include <string>
#include <string>
#include <ctime>
#include <cstdlib>

class Critter
{

public:
	Critter();
	Critter(Critter *world[20][20], int, int);
	~Critter();
	virtual bool breed();
	virtual void eat();
	virtual bool died();

	void setMovedAlready(bool);
	bool getMovedAlready();
	virtual int getType();
	virtual int move();

protected:

	int starveCounter;
	int timeToBreedTicks;
	int timeToDeathTicks;
	bool movedAlready;
	int critterBreedTicks;
	int critterDeathTicks;
	int worldsize;

private:
	int x;
	int y;

};
#endif // !Critter_hpp