/*********************************************************************
** Program Filename: Assignment_3
** Author: Thomas McIntosh
** Date: 7/20/2016
** Description: A program that makes a circular doublely linked list
** that can store character.
*********************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

struct ListNode
{ 
	char getData() { return data; }
	void setData(char data) { this->data = data; }
	ListNode* getPrevious() { return previous; }
	void setPrevious(ListNode *prev) { previous = prev; }
	ListNode* getNext() { return next; }
	void setNext(ListNode *nex) { next = nex; }

private:
	char data = NULL;
	ListNode *previous = NULL;
	ListNode* next = NULL;
};

void PrintFirst(ListNode* head);
void PrintAll(ListNode* head);

int main()
{
	int selection;
	char input;
	ListNode* head = NULL;
	ListNode* tail = NULL;
	ListNode* n = NULL;
	do {

		cout << endl << 
			"What would you like to do?" << endl;
		cout << "1. Add a new data point." << endl;
		cout << "2. Display the first value stored." << endl;
		cout << "3. Display all values stored." << endl;
		cout << "4. Exit the program." << endl << endl;
		cin >> selection;

		if (selection == 1)
		{
			if (head != NULL)
			{
				cout << "What character would you like to store?" << endl;
				cin >> input;
				n = new ListNode;
				n->setData(input);
				n->setPrevious(tail);
				tail->setNext(n);
				tail = n;
				n->setNext(head);

			}//if head != NULL

			else if (head == NULL)
			{
				cout << "What character would you like to store?" << endl;
				cin >> input;
				n = new ListNode;
				n->setData(input);
				head = n;
				tail = n;
	
			}//if head == NULL;
		}

		if (selection == 2)
		{
			PrintFirst(head);
			head->setData(NULL);
			head = head->getNext();
		}

		if (selection == 3)
		{
			PrintAll(head);

		}
		if (selection == 4)
		{
			delete n;
			delete head;
			delete tail;
			n = NULL;
			tail = NULL;
			head = NULL;
			return 0;
		}
	} while (selection == 1 || selection == 2 || selection == 3 || selection == 4);

	delete n;
	cin.get();
	cin.ignore();
	return 0;
}


void PrintFirst(ListNode* head)
{

	cout << "The first value stored is " << head->getData() << endl;
}

void PrintAll(ListNode* head)
{
	ListNode* temp = head;
	cout << "The values stored are" << endl;
	while (temp->getData() != NULL)
	{
		cout << temp->getData() << " "; 
		temp->setData(NULL);
		temp = temp->getNext();
	}//While loop
	delete temp;
}