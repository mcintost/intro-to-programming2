/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The header file for the forest class in
** a beach exploration game with a timer.
*********************************************************************/

#ifndef FOREST_HPP
#define FOREST_HPP

#include "Space.hpp"

class Forest : public Space
{
private:

	Forest* north;
	Forest* south;
	Forest* east;
	Forest* west;
	std::string name;
	bool action;
	int thrw;

public:
	Forest() {};
	~Forest() {};
	Forest(const std::string);
	bool getAction();
	void specialAction();
	Forest* move(Forest* current, int direction);
	Forest* getNorth();
	Forest* getSouth();
	Forest* getEast();
	Forest* getWest();
	std::string getName();
	void setNorth(Forest*);
	void setSouth(Forest*);
	void setEast(Forest*);
	void setWest(Forest*);
};

#endif // !FOREST_HPP