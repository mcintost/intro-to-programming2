/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The header file for the Shore class in
** a beach exploration game with a timer.
*********************************************************************/

#ifndef SHORE_HPP
#define SHORE_HPP

#include "Space.hpp"

class Shore : public Space
{
private:

	Shore* head;
	Shore* player;
	Shore* north;
	Shore* south;
	Shore* east;
	Shore* west;
	std::string name;
	bool action;
	bool shell;
	int wade;
	int pickup;

public:
	Shore() {};
	~Shore() {};
	Shore(const std::string);
	//~Shore();
	bool getAction();
	bool getShell();
	void specialAction();
	Shore* move(Shore* current, int direction);
	Shore* getNorth();
	Shore* getSouth();
	Shore* getEast();
	Shore* getWest();
	Shore* getPlayer();
	std::string getName();
	//void setPlayer();
	void setHead(Shore*);
	void setNorth(Shore*);
	void setSouth(Shore*);
	void setEast(Shore*);
	void setWest(Shore*);
};
#endif // !SHORE_HPP