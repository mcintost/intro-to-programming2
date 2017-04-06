/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The header file for the helicopter class in
** a beach exploration game with a timer.
*********************************************************************/

#ifndef HELICOPTER_HPP
#define HELICOPTER_HPP

#include "Space.hpp"

class Helicopter : public Space
{
private:

	Helicopter* north;
	Helicopter* south;
	Helicopter* east;
	Helicopter* west;
	std::string name;
	bool action;
	int leave;

public:
	Helicopter() {};
	~Helicopter() {};
	Helicopter(const std::string);
	//~Helicopter();
	bool getAction();
	void specialAction();
	Helicopter* move(Helicopter* current, int direction);
	Helicopter* getNorth();
	Helicopter* getSouth();
	Helicopter* getEast();
	Helicopter* getWest();
	Helicopter* getPlayer();
	std::string getName();
	//void setPlayer();
	void setHead(Helicopter*);
	void setNorth(Helicopter*);
	void setSouth(Helicopter*);
	void setEast(Helicopter*);
	void setWest(Helicopter*);
};
#endif // !HELICOPTER_HPP