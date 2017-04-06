/*************************************************
*Origninal Author unknown: modified by Thomas McIntosh
*7,17,2016
*This program takes an array of integers and can 
*find the average and sum
*************************************************/

#include "Average.h"
#include "Summation.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//All of the code used to test the functions
	/********************************************************
	//Tests to determine the accuracy of the average function
	double avgTest1[] = { 1, 2, 3, 4, 5 };
	double avgTest2[] = { 5, 5, 5, 5, 5 };
	double avgTest3[] = { 5.5, 5.5, 5.5, 5.5, 5.5 };
	double avgTest4[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double avgTest5[] = { -1.1, -2.2, -3.3, -4.4, -5.5 };
	//The next 3 test are to determine the bounds of the functions
	double avgTest6[] = { -500000000, 500000000 };
	double avgTest7[] = { -50000000000, 50000000000 };
	double avgTest8[] = { -50000000000000, 50000000000000 };
	
	double average1 = avg(avgTest1, 5);
	double average2 = avg(avgTest2, 5);
	double average3 = avg(avgTest3, 5);
	double average4 = avg(avgTest4, 5);
	double average5 = avg(avgTest5, 5);
	double average6 = avg(avgTest6, 2);
	double average7 = avg(avgTest7, 2);
	double average8 = avg(avgTest8, 2);

	cout << "The average1 should be 3 shows it is: " << average1 << endl;
	cout << "The average2 should be 5 shows it is: " << average2 << endl;
	cout << "The average3 should be 5.5 shows it is: " << average3 << endl;
	cout << "The average4 should be 3.3 shows it is: " << average4 << endl;
	cout << "The average5 should be -3.3 show it is: " << average5 << endl;
	cout << "The average6 should be 0 shows it is:  " << average6 << endl;
	cout << "The average7 should be 0 shows it is:  " << average7 << endl;
	cout << "The average8 should be 0 shows it is: " << average8 << endl;

	//Tests to determine the accuracy of the summation function
	double sumTest1[] = { 1, 2, 3, 4, 5 };
	double sumTest2[] = { 5, 5, 5, 5, 5 };
	double sumTest3[] = { 5.5, 5.5, 5.5, 5.5, 5.5 };
	double sumTest4[] = { -1.1, -2.2, -3.3, -4.4, -5.5 };
	//The next 2 test are to determine the bounds of the functions
	double sumTest5[] = { 10000000, 10000000 };
	double sumTest6[] = { -50000000000000, 50000000000000 };

	double sum1 = sum(sumTest1, 5);
	double sum2 = sum(sumTest2, 5);
	double sum3 = sum(sumTest3, 5);
	double sum4 = sum(sumTest4, 5);
	double sum5 = sum(sumTest5, 2);
	double sum6 = sum(sumTest6, 2);

	cout << "The sum1 should be 15 shows it is: " << sum1 << endl;
	cout << "The sum2 should be 25 shows it is: " << sum2 << endl;
	cout << "The sum3 should be 27.5 shows it is: " << sum3 << endl;
	cout << "The sum4 should be -16.5 is: " << sum4 << endl;
	cout << "The sum5 should be 2e7 shows it is: " << sum5 << endl;
	cout << "The sum6 should be 0 shows it is: " << sum6 << endl;
	****************************************************************************/
	double arrGiven[5];

	cout << "Please enter 5 numbers to find the average and sum of the numbers you input?" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter the " << i + 1 << "st number" << endl;
		cin >> arrGiven[i];
	}

	//Takes an array of 5 doubles and gives the average 

	double average = avg(arrGiven, 5);
	cout << "The average is " << average << endl;

	//Takes an array of 5 doubles and gives the sum

	double summation = sum(arrGiven, 5);
	cout << "The sum is " << summation << endl;
	cout << "Press enter to exit the program." << endl;
	cin.get();
	cin.ignore();
	return 0;
}