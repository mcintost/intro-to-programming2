/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The class file for the beach class in
** a beach exploration game with a timer.
*********************************************************************/

#ifndef BEACH_HPP
#define BEACH_HPP

#include"Space.hpp"
#include <iostream>

class Beach : public Space
{
private:

	Beach* head;
	Beach* player;
	Beach* north;
	Beach* south;
	Beach* east;
	Beach* west;
	std::string name;
	bool action;
	int dig;

public:
	Beach() {};
	Beach(const std::string);
	~Beach() {};
	void specialAction();
	bool getAction();
	Beach* move(Beach* current, int direction);
	Beach* getNorth();
	Beach* getSouth();
	Beach* getEast();
	Beach* getWest();
	Beach* getPlayer();
	std::string getName();
	//void setPlayer();
	void setHead(Beach*);
	void setNorth(Beach*);
	void setSouth(Beach*);
	void setEast(Beach*);
	void setWest(Beach*);
};
#endif // !BEACH_HPP