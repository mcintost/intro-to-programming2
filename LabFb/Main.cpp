/*********************************************************************
** Program Filename: LabFa
** Author: Thomas McIntosh
** Date: 7/31/2016
** Description: The main file for the program that uses a stack to
** to work as a RPN calculator. 
*********************************************************************/

#include "Stack.hpp"
#include "Calculator.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	Stack sck;
	int catchS;
	int catchQ;
	int selection;
	int selection1;
	int input;
	char c;
	string x;
	string test = "1 2 3 4 + - * /";
	Calculator calc;

	cout << "Press 1 to see the calculator in use." << endl;
	cout << "Press 2 to use the calculator." << endl;

	cin >> selection;
	if (selection != 1 && selection != 2 || cin.fail())
	{
		cout << "Please enter either 1 or 2." << endl;
		cin.clear();
		cin.ignore();
		cin >> selection;
	}

	/************************************************************************
	** The testing that shows the function of the stack and what happens   **
	** when you call for a stack or queue value when they are empty.       **
	************************************************************************/
	if (selection == 1)
	{
		cout << "Pushing the value of 1,2,3, and 4 to the stack." << endl;
		cout << "Pushing the operators + - * / in that order to the stack." << endl;
		calc.addnumber(1);
		calc.addnumber(2);
		calc.addnumber(3);
		calc.addnumber(4);
		calc.calculate("+");
		calc.calculate("-");
		calc.calculate("*");
		calc.calculate("/");
		cout << "Do you want to make your own stack and queue?" << endl;
		cout << "If not you will exit the program." << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cin >> selection1;
		if (selection1 == 1)
			selection = 2;
		else
		{
			cout << "Press enter to exit the program." << endl;
		}

	}//Else if selection == 1

	/*************************************************************************
	* Allows users to use a stack as a RPN calculator. It checks for letters *
	* to verify input then can take multiple inputs only seperated by spaces *
	* or one at a time.                                                      * 
	*************************************************************************/

	if (selection == 2)
	{	
		cout << "This is a Reverse Polish Notation Calculator." << endl;
		cout << "To use it you can input numbers and operators " << endl;
		cout << "with only a space between them or you can  " << endl;
		cout << "press enterbetween them. Press q at any " << endl;
		cout << "point to exit the program" << endl << endl;

		do {
			cin >> x;
			if (calc.isInside(x) == true)
			{
				if ((x == "+") || (x == "-") || (x == "*") || (x == "/"))	
				{
					calc.calculate(x);
				}//If it is an operator in the string.
				else
				{
					input = atoi(x.c_str());
					calc.addnumber(input);
				}//Else it is a number
			}//If input validation			
			else
				cout << "Please do not include invalid input." << endl;
		} while (x != "q");
	}//Else if selection 2

	cout << "Thank you for using the calculator. I hope it served your" << endl;
	cout << "purposes. Press Enter to close the program" << endl;
	cin.get();
	cin.ignore();
	return 0;
}