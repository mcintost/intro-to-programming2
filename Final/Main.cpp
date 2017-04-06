/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 8/5/2016
** Description: The main file for a beach exploration game with a timer.
*********************************************************************/

#include "Space.hpp"
#include "Beach.hpp"
#include "Shore.hpp"
#include "Forest.hpp"
#include "Map.hpp"
#include "Story.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
 
int main()
{
	//Space* map = new Space();
	Map* gameMap = new Map();
	Player* player = new Player();
	Story game;
	int choice;
	int moves;
	int direction;
	int turn = 0;
	Space* current = NULL;
	Space* nextN = NULL;
	Space* nextS = NULL;
	Space* nextE = NULL;
	Space* nextW = NULL;
	gameMap->setMap();
	current = gameMap->getStart();
	//Chapter1.

	if(current->getName() == "helicopter")
		game.getChapter1();

	std::cout << "What will you do?" << std::endl;
	std::cout << "1. Get up and pick up your parachute. " << std::endl;
	std::cout << "2. Ignore him and just sit there. " << std::endl;
	std::cout << "3. Get told how to win the game. " << std::endl;
	std::cin >> choice;
		do
		{
			//input validation for int.
			if (std::cin.fail())
			{
				std::cout << "Please enter valid input." << std::endl;
				std::cin.clear();
				std::cin.ignore();
				std::cin >> choice;
			}//Input validation

			else if (choice == 2)
			{
				std::cout << "I can't leave the helicopter without that parachute." << std::endl;
				std::cin >> choice;
				turn++;
			}//if choice = 2

			else if (choice == 1)
			{
				std::cout << "You have obtained a PARACHUTE." << std::endl;
				player->getParachute();
				player->bagCount();
				turn++;
			}//if choice = 1

			else if (choice == 3)
			{
				game.getChapterCheat();
				std::cout << "Press 1 to get your parachute." << std::endl;
				std::cin >> choice;
			}
			else
			{
				std::cout << "Please enter valid input." << std::endl;
				std::cin >> choice;
			}//else

		} while (choice != 1 && player->hasParachute() == false); //While the player does not have a parachute

		std::cout << "I am in the " << current->getName() << std::endl;

		std::cout << "Press any number to jump out of the helicopter." << std::endl;
		std::cin >> choice;
		current = current->move(current, 1);//move north
		//std::cout << "I am in room " << current->getName() << std::endl;
		gameMap->deleteStart();
		game.getChapter2();

	do{
		//If you take more that 15 turns this function ends the game
		if (turn == 15)
		{
			game.getTooLong();
			std::cin.get();
			std::cin.ignore();
			gameMap->deletor();
			delete gameMap;
			delete player;
			return 0;
		}
		//Getting the points around the current location
		nextN = current->getNorth();
		nextS = current->getSouth();
		nextE = current->getEast();
		nextW = current->getWest();

		std::cout << "Where do you want to go?" << std::endl;
		std::cout << "1. North towards the " << nextN->getName() << "." << std::endl;
		std::cout << "2. South towards the " << nextS->getName() << "." << std::endl;
		std::cout << "3. East towards the " << nextE->getName() << "." << std::endl;
		std::cout << "4. West towards the " << nextW->getName() << "." << std::endl;
		std::cout << "5. Look around." << std::endl;

		std::cin >> choice;
		turn++;	//Counting turns

		//Checking to verify the input is accurate
		while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 || std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Please enter a valid direction." << std::endl;
			std::cin >> choice;
		}

		//If you have chosen to take an action
		if (choice == 5)
		{
			if (current->getAction() == true)
			{
				std::cout << "You have already searched this area." << std::endl << std::endl;
			}//Trying to research an area

			else if (current->getAction() == false && current->getName() == "Forest" && player->hasShell() == false)
			{
				std::cout << "You see something in the tree, if only you had something to throw at it..." << std::endl << std::endl;
			}//Trying to get Forest key w/o shell

			else
			{
				current->specialAction();
		
				if (current->getName() == "Beach" && player->haskey1() == false && current->getAction() == true)
				{
					std::cout << "Player has gotten Beach Key!" << std::endl << std::endl;
					player->getkey1();
					player->bagCount();
				}//Player is in the beach and decides to dig.

				else if (current->getName() == "Shore" && player->haskey2() == false && current->getAction() == true && current->getShell() == true)
				{
					std::cout << "Player has gotten Shore Key!" << std::endl;
					std::cout << "Player has obtained a large shell!" << std::endl;
					player->getkey2();
					player->getShell();
					player->bagCount();
				}//Player is on the shore and decides to pick up the key and shell.

				else if (current->getName() == "Shore" && player->haskey2() == false && current->getAction() == true && current->getShell() == false)
				{
					std::cout << "Player has gotten Shore Key!" << std::endl;
					player->getkey2();
					player->bagCount();
				}//Player is on the shore and decides to pick up the key.

				else if (current->getName() == "Shore" && player->haskey2() == false && current->getShell() == true && current->getAction() == false)
				{
					std::cout << "Player has obtained a large shell!" << std::endl;
					player->getShell();
					player->bagCount();
				}//Player is on the shore and decides to pick up the shell.

				else if (current->getName() == "Shore" && player->haskey2() == true && current->getShell() == true && player->hasShell() == false)
				{
					std::cout << "Player has obtained a large shell!" << std::endl;
					std::cout << "You already have this kind of key though." << std::endl;
					player->getShell();
					player->bagCount();
				}//Player is on the shore already has the key2 but not shell and wants to pick it up

				else if (current->getName() == "Shore" && player->haskey2() == true && current->getShell() == true && player->hasShell() == true)
				{
					std::cout << "You already have this kind of key, and you don't need a second shell." << std::endl;
				}//Player has sell and Shore key and is trying to get both.

				else if (current->getName() == "Forest" && player->haskey3() == false && current->getAction() == true && player->hasShell() == true)
				{
					std::cout << "You have obtained Forest key!" << std::endl;
					player->getkey3();
					player->usedItem();
					player->bagCount();
				}//Player gets Forest key uses shell
		
				else if (current->getAction() == false)
				{
					std::cout << "You have decided not to do anything here" << std::endl;
				}//Say no during special action.

				else
				{
					std::cout << "You already have this kind of key." << std::endl << std::endl;
				}//Trying to get the same key
			}
		}//if choice == 5

		else
		{

			current = current->move(current, choice); //move
			if (current->getName() == "area that does not appear to be safe")
			{
				game.getChapter0_5();
				std::cin.get();
				std::cin.ignore();
				gameMap->deletor();
				delete gameMap;
				delete player;
				return 0;
			}//Player is trying to go out on the edge
			//std::cout << "I am in room " << current->getName() << std::endl << std::endl;
		}//Player has decided to move.
	} while (player->haskey1() == false || player->haskey2() == false || player->haskey3() == false );

	game.getChapter3();
	gameMap->exit();
	turn = 0;

	do {
		//Getting the points around the current location
		if (current->getName() != "the escape helicopter")
		{
			nextN = current->getNorth();
			nextS = current->getSouth();
			nextE = current->getEast();
			nextW = current->getWest();

			std::cout << "Where do you want to go?" << std::endl;
			std::cout << "1. North towards the " << nextN->getName() << "." << std::endl;
			std::cout << "2. South towards the " << nextS->getName() << "." << std::endl;
			std::cout << "3. East towards the " << nextE->getName() << "." << std::endl;
			std::cout << "4. West towards the " << nextW->getName() << "." << std::endl;
			std::cout << "5. Look around." << std::endl;
		}
		else
		{
			std::cout << "You have made it into the helicopter." << std::endl;
			std::cout << "1. look around." << std::endl;
		}
		std::cin >> choice;
		turn++;	//Counting turns
	
		while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 || std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Please enter a valid direction." << std::endl;
			std::cin >> choice;
		}

		if (choice == 5 && current->getName() != "the escape helicopter")
		{
			std::cout << "I already have everything of interest around here." << std::endl << std::endl;
		}
		else if (choice == 1 && current->getName() == "the escape helicopter")
		{	
			current->specialAction();
			if (current->getAction() == true)
			{
				game.getChapter4();
		
				std::cin.get();
				std::cin.ignore();
				gameMap->deletor();
				delete gameMap;
				delete player;
				return 0;
			}
		}
		else
		{

			current = current->move(current, choice); //move
			if (current->getName() == "area that does not appear to be safe")
			{
				game.getChapter0_5();
				std::cin.get();
				std::cin.ignore();
				gameMap->deletor();
				delete gameMap;
				delete player;
				return 0;
			}//Player is trying to go out on the edge
	//		std::cout << "I am currently in " << current->getName() << std::endl << std::endl;
		}//Player has decided to move.
	
	} while (turn <= 8);

	game.getTooLong();
	gameMap->deletor();
	delete gameMap;
	delete player;
	std::cin.get();
	std::cin.ignore();
	return 0;
}

