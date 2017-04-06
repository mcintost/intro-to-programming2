/*******************************
**Thomas McIntosh
**June, 26 ,2016
**CS_162 This is the class file for a function that takes an array of doubles and returns an average of the array values
*******************************/

#include "average.h"

double avg(const double values[], int size)
{
	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += values[i];
	}
	return sum / (double)size;
}