/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The header file for the Space class in
** a beach exploration game with a timer.
*********************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

//#include"Player.hpp"
#include <iostream>
#include <string>

class Space
{
	friend class Map;
protected:

	Space* head;
	Space* player;
	Space* north;
	Space* south;
	Space* east;
	Space* west;
	std::string name;

public:
	Space() {};
	Space(const std::string);
	virtual ~Space() {};
	virtual bool getAction() = 0;
	virtual void specialAction() = 0;
	virtual Space* move(Space* current, int direction);
	Space* getNorth();
	Space* getSouth();
	Space* getEast();
	Space* getWest();
	Space* getPlayer();
	virtual bool getShell() { return false; }
	virtual std::string getName();
	void setPlayer(Space*);
	void setHead(Space*);
	void setNorth(Space*);
	void setSouth(Space*);
	void setEast(Space*);
	void setWest(Space*);
};
#endif // !SPACE_HPP