/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The header file for the player class in
** a beach exploration game with a timer.
*********************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player 
{
	friend class Space;
public:
	Player();
	~Player() {};
	void bagCount();	
	void usedItem();
	bool hasParachute();
	void getParachute();
	bool haskey1();
	void getkey1();
	bool haskey2();
	void getkey2();
	bool haskey3();
	void getkey3();
	bool hasShell();
	void getShell();


private:
	int itemCount;
	bool shell;
	bool parachute;
	bool key1;
	bool key2;
	bool key3; 
};
#endif // !PLAYER_HPP