/*********************************************************************
** Program Filename: LabFa
** Author: Thomas McIntosh
** Date: 7/31/2016
** Description: The class file for the Stack class.
*********************************************************************/

#include "Stack.hpp"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

void Stack::push(int num)
{
	if(!cin.fail())
	top = new StackNode(num, top);
}

void Stack::pop(int &num)
{
	StackNode *temp;

	if (isEmpty())
	{
		cout << "The stack is empty." << endl;
	}
	else
	{
		temp = top;
		top = top->next;
		delete temp;
	}
}

int Stack::peek()
{
	if(!isEmpty())
		return top->value;
}

bool Stack::isEmpty() const
{
	if (!top)
		return true;
	else
		return false;
}