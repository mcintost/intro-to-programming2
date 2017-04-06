/*********************************************************************
** Program Filename: LabFa
** Author: Thomas McIntosh
** Date: 7/31/2016
** Description: The header file for the Stack class.
*********************************************************************/

#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>

class Stack
{
private:
	class StackNode
	{
		friend class Stack;
		int value;
		StackNode *next;
		StackNode(int value1, StackNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	StackNode *top;
public:
	Stack() { top = NULL; }
	void push(int);
	void pop(int &);
	int peek();
	bool isEmpty() const;
};


#endif // !STACK_HPP