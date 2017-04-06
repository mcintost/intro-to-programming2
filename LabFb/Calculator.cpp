/*********************************************************************
** Program Filename: LabFa
** Author: Thomas McIntosh
** Date: 7/31/2016
** Description: The class file for the calculator class
** that uses a stack to to work as a RPN calculator.
*********************************************************************/

#include "Calculator.hpp"

using std::cin;
using std::cout;
using std::endl;

Calculator::Calculator()
{}

/*************************************************************************
** If an operator is used it the string this equation utalizes them     **
*************************************************************************/

void Calculator::calculate(std::string x)
{
	//Verifies there is something in the stack for a.
	if (!sck.isEmpty())
	{
		a = sck.peek();
		sck.pop();
	}
	
	//Verifies there is something in the stack for b.
	if (!sck.isEmpty())
	{
		b = sck.peek();
		sck.pop();
	}

	if ((a != NULL) && (b != NULL))
	{
		if (x == "+")
		{
			sck.push(a + b);
			cout << a << " + " << b << " = " << (a + b) << endl;
		}
		else if (x == "-")
		{
			sck.push(a - b);
			cout << a << " - " << b << " = " << (a - b) << endl;
		}
		else if (x == "*")
		{
			sck.push(a * b);
			cout << a << " * " << b << " = " << (a * b) << endl;
		}
		else if (x == "/")
		{
			sck.push(a / b);
			cout << a << " / " << b << " = " << (a / b) << endl;
		}
		else
		{
			cout << "This is an error." << endl;
		}
	}
	else
		cout << "Please enter 2 numbers before using an operator." << endl;
}

//Takes numbers from the string and adds them to the stack.
void Calculator::addnumber(int number)
{
	sck.push(number);
}

//Used to verify the input of the string.
bool Calculator::isInside(std::string const & str)
{
	return str.find_first_not_of("0123456789+-/*q") == std::string::npos;
}

//Used to verify the stack is working properly
void Calculator::stackChecker()
{
	cout << "Pushing the value of 1,2,3, and 4 to the stack." << endl;
	sck.push(1);
	sck.push(2);
	sck.push(3);
	sck.push(4);
	cout << "Pushing the operators + - * / in that order to the stack." << endl;
	sck.push('+');
	sck.push('-');
	sck.push('*');
	sck.push('/');
	////Runs until the stack is empty.
	//while (!sck.isEmpty())
	//{
	//	cout << "Peek at the stack " << sck.peek() << endl;
	//	catchS = sck.peek();
	//	sck.pop();
	//	cout << "Pop the stack " << catchS << endl;
	//}
	//cin >> catchS;
}

