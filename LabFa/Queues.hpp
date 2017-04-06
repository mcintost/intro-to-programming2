/*********************************************************************
** Program Filename: LabFa
** Author: Thomas McIntosh
** Date: 7/31/2016
** Description: The header file for the Queues class.
*********************************************************************/

#ifndef QUEUES_HPP
#define QUEUES_HPP
#include <iostream>

class Queue
{
private:
	class QueueNode
	{
		friend class Queue;
		int value;
		QueueNode *next;
		QueueNode(int value1, QueueNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	QueueNode *head;
	QueueNode *tail;

public:
	Queue();
	void addBack(int);
	void removeFront(int &num);
	int getFront();
	bool isEmpty() const;

};


#endif // !QUEUES_HPP