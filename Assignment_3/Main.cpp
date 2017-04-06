/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: The main file for a fantasy dice rolling fighting game.
*********************************************************************/

#include "Creature.hpp"
#include "Dice.hpp"
#include "Reptile.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "Golum.hpp"
#include "HarryPotter.hpp"

#include <iostream>
#include <string> 
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//seed the random number generator
	srand(time(0));
	int selection;
	string fighter1;
	string fighter2;
	Dice dice;

	int player1character;
	int player2character;
	int p1Initiative;
	int p2Initiative;

	Creature *c1 = NULL;
	Creature *c2 = NULL;	
	
	//The character selection for the first player
	cout << "Player 1 select your fighter:" << endl;
	cout << "1. Reptile" << endl;
	cout << "2. Blue Men" << endl;
	cout << "3. Medusa" << endl;
	cout << "4. Gollum" << endl;
	cout << "5. Harry Potter" << endl;
	cin >> selection;

	if (selection <= 0 || selection >= 6)
	{
		cout << "Please select a valid fighter" << endl;
		cin >> selection;
	}//End of input validation.

	if (selection == 1)
	{
		cout << "You have chosen Reptile." << endl;
		c1 = new Reptile();
	}//End of selection 1 if.

	else if (selection == 2)
	{
		cout << "You have selected Blue Men." << endl;
		c1 = new BlueMen();
	}//End of selection 2 if.

	else if (selection == 3)
	{
		cout << "You have selected Medusa." << endl;
		c1 = new Medusa();
	}//End of selection 3 if.

	else if (selection == 4)
	{
		cout << "You have selected Gollum." << endl;
		c1 = new Golum();
	}//End of selection 4 if.

	else if (selection == 5)
	{
		cout << "You have selected Harry Potter" << endl;
		c1 = new HarryPotter();
	}//End of selection 5 if.

	//Character selection for player 2
	cout << endl << "Player 2 select your fighter" << endl;
	cout << "1. Reptile" << endl;
	cout << "2. Blue Men" << endl;
	cout << "3. Medusa" << endl;
	cout << "4. Gollum" << endl;
	cout << "5. Harry Potter" << endl;
	cin >> selection;

	if (selection <= 0 || selection >= 6)
	{
		cout << "Please select a valid fighter" << endl;
		cin >> selection;
	}//End of input validation.

	if (selection == 1)
	{
		cout << "You have chosen Reptile." << endl;
		c2 = new Reptile();
	}//End of selection 1 if.

	else if (selection == 2)
	{
		cout << "You have selected Blue Men." << endl;
		c2 = new BlueMen();
	}//End of selection 2 if.

	else if (selection == 3)
	{
		cout << "You have selected Medusa." << endl;
		c2 = new Medusa();
	}//End of selection 3 if.

	else if (selection == 4)
	{
		cout << "You have selected Gollum." << endl;
		c2 = new Golum();
	}//End of selection 4 if.

	else if (selection == 5)
	{
		cout << "You have selected Harry Potter" << endl;
		c2 = new HarryPotter();
	}//End of selection 5 if.

	cout << endl << "Let us see who attacks first:" << endl << endl;

	p1Initiative = dice.roll(6, 1);
	p2Initiative = dice.roll(6, 1);

	cout << "Player 1 rolled " << p1Initiative << " initiative" <<  endl;
	cout << "Player 2 rolled " << p2Initiative << " initiative" << endl << endl;

	/*****************************************************
	*If statements to determine which players will attack.
	*****************************************************/
	if (p1Initiative < p2Initiative)
		cout << "Player 2 will attack first." << endl << endl;
	else if (p1Initiative > p2Initiative)
		cout << "Player 1 will attack first." << endl << endl;
	else if (p1Initiative == p2Initiative)
		cout << "Player 1 goes first becauase of the tie" << endl << endl;

	/*****************************************************
	*The loop of the game if player 1 attacks first
	*****************************************************/
	if (p1Initiative >= p2Initiative)
	{

		while (c1->alive() && c2->alive())
		{
			//Player 1 attacking player 2. 
			int hits = c1->attack();
			int defense = c2->defense();
			int damage = hits - defense;



			 /********************************************************
			 *Outputs the attack roll for player 1                   *
			 *the defense roll for player 2 and player 2's remaining *
			 *health                                                 *
			 *********************************************************/
			cout << "Player 1's " << c1->getName() << " attacked for " << hits << endl;
			cout << "PLayer 2's " << c2->getName() << " defended for " << defense << endl;
			int damageDealt1 = c2->damageTaken(damage);
			cout << "Player 2's " << c2->getName() << " has " << damageDealt1 << " health remaining." << endl << endl;
			cout << "Press enter for the next attack" << endl << endl;

			//Checks to see if Medusa activated her special
			if (hits == 1000)
			{
				cout << "Player 1 is victorious!" << endl;
				cout << "Press enter to leave the program. " << endl;
				cin.get();
				cin.ignore();
				delete c1;
				delete c2;
				c1 = 0;
				c2 = 0;
				return 0;
			}//Medusa special if loop.

			//Checks to see if Player 1 won the game. 
			if (damageDealt1 == 0)
			{
				cout << "Player 1 is victorious!" << endl;
				cout << "Press enter to leave the program. " << endl;
				cin.get();
				cin.ignore();
				delete c1;
				delete c2;
				c1 = 0;
				c2 = 0;
				return 0;
			}//end of if loop to see if Player 1 has won.
			cin.get();

			//Player 2 attacking player 1.
			int hits2 = c2->attack();
			int defense2 = c1->defense();
			int damage2 = hits2 - defense2;

			/********************************************************
			*Outputs the attack roll for player 2                   *
			*the defense roll for player 1 and player 1's remaining *
			*health                                                 *
			*********************************************************/
			cout << "Player 2's " << c2->getName() << " attacked for " << hits2 << endl;
			cout << "Player 1's " << c1->getName() << " defended for " << defense2 << endl;
			int damageDealt2 = c1->damageTaken(damage2);
			cout << "Player 1's " << c1->getName() << " has " << damageDealt2 << " health remaining." << endl << endl;
			cout << "Press enter for the next attack" << endl << endl;

			//Checks to see if Medusa activated her special.
			if (hits2 == 1000)
			{
				cout << "Player 2 is victorious!" << endl;
				cin.get();
				cin.ignore();
				delete c1;
				delete c2;
				c1 = 0;
				c2 = 0;
				return 0;
			}//Medusa's special if loop.

			//Checks to see if player 2 has won. 
			if (damageDealt2 == 0)
			{
				cout << "Player 2 is victorious!" << endl;
				cout << "Press enter to leave the program. " << endl;
				cin.get();
				delete c1;
				delete c2;
				c1 = 0;
				c2 = 0;
				return 0;
			}//end of if loop to see if Player 2 has won.
			cin.get();
		}//While loop that runs while both characters are alive.
	}//If loop for both characters picking Reptile and p1 attacking first.

	//The loop if player 2 attacks first. 
	if (p1Initiative < p2Initiative)
		{

			while (c1->alive() && c2->alive())
			{
				//Player 2 attacking player 1.
				int hits2 = c2->attack();
				int defense2 = c1->defense();
				int damage2 = hits2 - defense2;
	
				/********************************************************
				*Outputs the attack roll for player 2                   *
				*the defense roll for player 1 and player 1's remaining *
				*health                                                 *
				*********************************************************/
				cout << "Player 2's " << c2->getName() << " attacked for " << hits2 << endl;
				cout << "Player 1's " << c1->getName() << " defended for " << defense2 << endl;
				int damageDealt2 = c1->damageTaken(damage2);
				cout << "Player 1's " << c1->getName() << " has " << damageDealt2 << " health remaining." << endl << endl;
				cout << "Press enter for the next attack" << endl << endl;

				//Checking to see if Medusa special is activated
				if (hits2 == 1000)
				{
					cout << "Player 2 is victorious!" << endl;
					cout << "Press enter to leave the program. " << endl;
					cin.get();
					cin.ignore();
					delete c1;
					delete c2;
					c1 = 0;
					c2 = 0;
					return 0;
				}//Checking to see if Medusa special is activated

				//Checking if Player 2 has won.
				if (damageDealt2 == 0)
				{
					cout << "Player 2 is victorious!" << endl;
					cout << "Press enter to leave the program. " << endl;
					cin.get();
					delete c1;
					delete c2;
					c1 = 0;
					c2 = 0;
					return 0;
				}//end of if loop to see if Player 2 has won.
				cin.get();

				//Player 1 attacking player 2. 
				int hits = c1->attack();
				int defense = c2->defense();
				int damage = hits - defense;

				/********************************************************
				*Outputs the attack roll for player 1                   *
				*the defense roll for player 2 and player 2's remaining *
				*health                                                 *
				*********************************************************/
				cout << "Player 1's " << c1->getName() << " attacked for " << hits << endl;
				cout << "PLayer 2's " << c2->getName() << " defended for " << defense << endl;
				int damageDealt1 = c2->damageTaken(damage);
				cout << "Player 2's " << c2->getName() << " has " << damageDealt1 << " health remaining." << endl << endl;
				cout << "Press enter for the next attack" << endl << endl;

				//Checking to see if Medusa special is activated
				if (hits == 1000)
				{
					cout << "Player 1 is victorious!" << endl;
					cout << "Press enter to leave the program. " << endl;
					cin.get();
					cin.ignore();
					delete c1;
					delete c2;
					c1 = 0;
					c2 = 0;
					return 0;
				}//Medusa's special, if loop.
				
				if (damageDealt1 == 0)
				{
					cout << "Player 1 is victorious!" << endl;
					cout << "Press enter to leave the program. " << endl;
					cin.get();
					delete c1;
					delete c2;
					c1 = 0;
					c2 = 0;
					return 0;
				}//end of if loop to see if Player 1 has won.
				cin.get();
			}//While loop that runs while both characters are alive.
		}//If loop for both characters picking Reptile and p2 attacking first.
	
	delete c1;
	delete c2;
	c1 = 0;
	c2 = 0;
	return 0;
	
}