/*********************************************************************
** Program Filename: LabFa
** Author: Thomas McIntosh
** Date: 7/31/2016
** Description: The main file for the program that shows the proper 
**functions of stacks and queues.
*********************************************************************/

#include "Stack.hpp"
#include "Queues.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	Stack sck;
	Queue que;
	int catchS;
	int catchQ;
	int selection;
	int selection1;
	int selection2;
	int input;

	cout << "Press 1 to see the stack and queue in use." << endl;
	cout << "Press 2 to use the stack then the queue." << endl;
	cin >> selection;

	/************************************************************************
	** The testing that shows the function of both stacks and queues and   **
	** what happens when you call for a stack or queue value when they     **
	** are empty.                                                          ** 
	************************************************************************/
	if (selection == 1)
	{
		cout << "Pushing the value of 1,2,3, and 4 to the stack." << endl;
		sck.push(1);
		sck.push(2);
		sck.push(3);
		sck.push(4);
		
		//Runs until the stack is empty.
		while (!sck.isEmpty())
		{
			cout << "Peek at the stack " << sck.peek() << endl;
			catchS = sck.peek();
			sck.pop(catchS);
			cout << "Pop the stack " << catchS << endl;
		}

		cout << "Calling pop one more time to see what happens when the stack is empty." << endl;
		sck.pop(catchS);	//To show the stack is empty.1

		cout << "Adding the valueing values to the queue 1, 2, 3, and 4." << endl;
		que.addBack(1);
		que.addBack(2);
		que.addBack(3);
		que.addBack(4);

		//Runs until the Queue is empty.
		while (!que.isEmpty())
		{
			cout << "Getting the first value in the queue " << que.getFront() << endl;
			catchQ = que.getFront();
			que.removeFront(catchQ);
			cout << "Removing the first value in the queue " << catchQ << endl;
		}

		cout << "Calling removeFront one more time to see what happens when the queue is empty." << endl;
		que.removeFront(catchQ);

		cout << "Do you want to make your own stack and queue?" << endl;
		cout << "If not you will exit the program." << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cin >> input;
		if (input == 1)
			selection = 2;
		else
		{
			cout << "Press enter to exit the program." << endl;
		}
	}
	
	/************************************************************************
	** Allows the user to make their own stacks and queues with int values **
	** Once they are done making each one it will then remove all the      **
	** values while showing what it is doing to the user.                  **
	************************************************************************/
	if (selection == 2)
	{
		cout << endl << "First you will make a stack and remove the integers then you will make a queue." << endl;
		cout << "Enter as many intergers as you would like for the stack." << endl;
		cout << "Enter any non number input when you are done." << endl;

		do
		{
			cin >> selection1;
			sck.push(selection1);
		} while (!cin.fail());
		cin.clear();
		cin.ignore();

		//Runs until stack is empty.
		while (!sck.isEmpty())
		{
			cout << "Peek at the stack " << sck.peek() << endl;
			catchS = sck.peek();
			sck.pop(catchS);
			cout << "Pop the stack " << catchS << endl;
		}
		//sck.pop(catchS);	//To show the stack is empty.

		cout << "Enter as many integers as you would like for the queue." << endl;
		cout << "Enter any non number input when you are done." << endl;

		do
		{
			cin >> selection2;
			que.addBack(selection2);
		} while (!cin.fail());

		//Runs until the queue is empty.
		while (!que.isEmpty())
		{
			cout << "Getting the first value in the queue " << que.getFront() << endl;
			catchQ = que.getFront();
			que.removeFront(catchQ);
			cout << "Removing the first value " << catchQ << endl;
		}
		cout << "You have now finished the program and it will exit." << endl;
	}

	

	cin.get();
	cin.ignore();
	return 0;
}