/*********************************************************************
** Program Filename: LabFa
** Author: Thomas McIntosh
** Date: 7/31/2016
** Description: The class file for the Queues class.
*********************************************************************/

#include "Queues.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

Queue::Queue()
{
	head = NULL;
	tail = NULL;
}

void Queue::addBack(int num)
{
	if (!cin.fail())
	{
		if (isEmpty())
		{
			head = new QueueNode(num);
			tail = head;
		}
		else
		{
			tail->next = new QueueNode(num);
			tail = tail->next;
		}//Else statement
	}//If !cin.fail.
}

void Queue::removeFront(int & num)
{
	QueueNode *temp;
	if (isEmpty())
	{
		cout << "The queue is empty." << endl;
	}

	else
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}

int Queue::getFront()
{
	if (!isEmpty())
		return head->value;
}

bool Queue::isEmpty() const
{
	if (head == NULL)
		return true;
	else
		return false;
}

