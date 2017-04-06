/*******************************
**Thomas McIntosh
**June, 26 ,2016
**CS_162 This is the Main file that can take arrays of doubles and return either the sum or average of the values found in the array.
*******************************/

#include "average.h"
#include "summation.h"
#include <iostream>
using namespace std;

int main()
{
	//All of the code used to test the functions
	
	//Tests to determine the accuracy of the average function
	double avgTest1[] = { 1, 2, 3, 4, 5 };
	double avgTest2[] = { 5, 5, 5, 5, 5 };
	double avgTest3[] = { 5.5, 5.5, 5.5, 5.5, 5.5 };
	double avgTest4[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double avgTest5[] = { -1.1, -2.2, -3.3, -4.4, -5.5 };

	double average1 = avg(avgTest1, 5);
	double average2 = avg(avgTest2, 5);
	double average3 = avg(avgTest3, 5);
	double average4 = avg(avgTest4, 5);
	double average5 = avg(avgTest5, 5);

	cout << "The average1 is: " << average1 << endl;
	cout << "The average2 is: " << average2 << endl;
	cout << "The average3 is: " << average3 << endl;
	cout << "The average4 is: " << average4 << endl;
	cout << "The average5 is: " << average5 << endl;
	//Tests to determine the accuracy of the summation function
	double sumTest1[] = { 1, 2, 3, 4, 5 };
	double sumTest2[] = { 5, 5, 5, 5, 5 };
	double sumTest3[] = { 5.5, 5.5, 5.5, 5.5, 5.5 };
	double sumTest4[] = { -1.1, -2.2, -3.3, -4.4, -5.5 };
	double sumTest5[] = { 10000000, 10000000 };

	double sum1 = sum(sumTest1, 5);
	double sum2 = sum(sumTest2, 5);
	double sum3 = sum(sumTest3, 5);
	double sum4 = sum(sumTest4, 5);
	double sum5 = sum(sumTest5, 2);

	cout << "The sum1 is: " << sum1 << endl;
	cout << "The sum2 is: " << sum2 << endl;
	cout << "The sum3 is: " << sum3 << endl;
	cout << "The sum4 is: " << sum4 << endl;
	cout << "The sum5 is: " << sum5 << endl;
	***************************************/
	
	double arrGiven[5];
	
	cout << "Please enter 5 numbers to find the average and sum of the numbers you input?" << endl;
	for(int i = 0; i < 5; i++)
	{	
		cout << "Please enter the " << i+1 << "st number" << endl;
		cin >> arrGiven[i];
	}

	//Takes an array of 5 doubles and gives the average 

	double average = avg(arrGiven, 5);
	cout << "The average is " << average << endl;

	//Takes an array of 5 doubles and gives the sum

	double summation = sum(arrGiven, 5);
	cout << "The sum is " << summation << endl;

	cin.get();
	cin.ignore();
}