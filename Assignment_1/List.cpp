/*********************************
**Thomas McIntosh
**June 28, 2016
**This is the class file for the List class in a shopping cart program
**********************************/

#include "List.h"
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::string;
using std::endl;

List::List() {
	count = 0;
	capacity = 10;
	arr = new Item*[10];
}

//This funcion adds an Item to a List; array
void List::add() {
	std::string name, unit;
	int num;
	double price;
	cout << "Enter Item Name: " << endl;
	cin >> name;
	cout << "Enter unit(can, box, pounds, ounces): " << endl;
	cin >> unit; 
	cout << "How many " << name << "s do you want to buy: " << endl;
	cin >> num;
	cout << "Unit price: " << endl;
	cin >> price;
	//Checks to see if the array needs to be increased in size
	if (count == capacity)
		doubleSize();
	arr[count++] = new Item(name, unit, num, price);
}

//Doubles the size of the array if the array has been filled 
void List::doubleSize() {
	capacity *= 2;
	Item **newarr = new Item*[capacity];
	for (int i = 0; i < count; ++i) {
		newarr[i] = arr[i];
	}
	arr = newarr;
}

//Determines where to remove the item and decreases the size of the array by 1
void List::removeAt(int ind) {
	for (int i = ind; i < count - 1; ++i) {
		arr[i] = arr[i + 1];
	}
	--count;
}

//Removes an item based on the name of the item
void List::remove() {
	cout << "Enter name of the item to remove: ";
	std::string name;
	cin >> name;
	for (int i = 0; i < count; ++i) {
		if (arr[i]->getName() == name) {
			removeAt(i);
		}
	}
}

//Displays the details of the Items in the array
void List::display() {
	double sum = 0;
	for (int i = 0; i < count; ++i) {
		cout << "Name: " << arr[i]->getName() << endl;
		cout << "Unit: " << arr[i]->getUnit() << endl;
		cout << "Number: " << arr[i]->getNumbers() << endl;
		cout << "Unit Price: " << arr[i]->getUnitPrice() << endl << endl;
		cout << "Total cost of Item: " << std::setprecision(2) << arr[i]->getUnitPrice() * arr[i]->getNumbers() << endl << endl;
		sum += (arr[i]->getUnitPrice() * arr[i]->getNumbers());
	}
	cout << "Total price: " << sum << endl;
}