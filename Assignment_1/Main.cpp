/*********************************
**Thomas McIntosh
**June 28, 2016
**This is the main file for a shopping cart program
**********************************/

#include "List.h"
#include "Item.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int option;
	List list;
	while (true)
	{
		cout << "Enter 1 to add an item" << endl;
		cout << "Enter 2 to remove an item" << endl;
		cout << "Enter 3 to display" << endl;
		cout << "Enter 4 to exit" << endl;
		cout << "Choose an option: " << endl;
		cin >> option;
		switch (option)
		{
		//add an item
		case 1:
			list.add();
			break;
		//remove an item
		case 2:
			list.remove();
			break;
		//display the list of items with the item's cost and total cost
		case 3:
			list.display();
			break;
		//exit the program
		case 4:
			return 0;
		//if something other than 1-4 is chosen
		default:
			cout << "Choose a valid option" << endl;
		}
		cin.get();
		cin.ignore();
	}
	return 0;
}