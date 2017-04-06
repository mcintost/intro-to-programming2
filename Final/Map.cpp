/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The class file for the map class in
** a beach exploration game with a timer.
*********************************************************************/


#include "Map.hpp"

Map::Map()
{
	helicopter = new Helicopter("helicopter");
	beach1 = new Beach("Beach");
	beach2 = new Beach("Beach");
	beach3 = new Beach("Beach");
	shore1 = new Shore("Shore");
	shore2 = new Shore("Shore");
	shore3 = new Shore("Shore");
	forest1 = new Forest("Forest");
	forest2 = new Forest("Forest");
	forest3 = new Forest("Forest");
	danger = new Helicopter("area that does not appear to be safe");
	helicopter2 = new Helicopter("the escape helicopter");
	current = helicopter;
}

void Map::deletor()
{
	delete beach1;
	delete beach2;
	delete beach3;
	delete shore1;
	delete shore2;
	delete forest1;
	delete forest2;
	delete forest3;
	delete danger;
	delete shore3;
	delete helicopter2;
}

void Map::setMap()
{
	//Setting the spaces around the helicopter
	helicopter->setNorth(beach1);

	//Setting the spaces around the middle beach
	beach1->setNorth(forest1);
	beach1->setSouth(shore1);
	beach1->setEast(beach3);
	beach1->setWest(beach2);

	//Setting the spaces around the left beach
	beach2->setNorth(forest2);
	beach2->setSouth(shore2);
	beach2->setEast(beach1);
	beach2->setWest(danger);

	//Setting the spaces around the right beach
	beach3->setNorth(forest3);
	beach3->setSouth(shore3);
	beach3->setEast(danger);
	beach3->setWest(beach1);

	//Setting the spaces around the middle shore
	shore1->setNorth(beach1);
	shore1->setSouth(danger);
	shore1->setEast(shore3);
	shore1->setWest(shore2);

	//Setting the space around the left shore
	shore2->setNorth(beach2);
	shore2->setSouth(danger);
	shore2->setEast(shore1);
	shore2->setWest(danger);

	//Setting the space around the right shore
	shore3->setNorth(beach2);
	shore3->setSouth(danger);
	shore3->setEast(danger);
	shore3->setWest(shore1);

	//Setting the space around the middle forest
	forest1->setNorth(danger);
	forest1->setSouth(beach1);
	forest1->setEast(forest3);
	forest1->setWest(forest2);

	//Setting the space the left forest
	forest2->setNorth(danger);
	forest2->setSouth(beach2);
	forest2->setEast(forest1);
	forest2->setWest(danger);

	//Setting the space the right forest
	forest3->setNorth(danger);
	forest3->setSouth(beach3);
	forest3->setEast(danger);
	forest3->setWest(forest1);
}

Space* Map::getStart()
{
	start = helicopter;
	return start;
}

void Map::exit()
{
	shore3->setSouth(helicopter2);
}

void Map::deleteStart()
{
	delete helicopter;
}