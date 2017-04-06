/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The header file for the map class in
** a beach exploration game with a timer.
*********************************************************************/

#ifndef MAP_HPP
#define MAP_HPP

#include "Space.hpp"
#include "Beach.hpp"
#include "Shore.hpp"
#include "Forest.hpp"
#include "Helicopter.hpp"
#include "Player.hpp"

class Map
{
public:
	Map();
	~Map() {};
	void deletor();
	void setMap();
	Space* getStart();
	void deleteStart();
	void exit();

private:
	Space* start;
	Space* helicopter;
	Space* beach1;
	Space* beach2;
	Space* beach3;
	Space* shore1;
	Space* shore2;
	Space* forest1;
	Space* forest2;
	Space* forest3;
	Space* danger;
	Space* current;
	Space* shore3;
	Space* helicopter2;
};
#endif // !MAP_HPP