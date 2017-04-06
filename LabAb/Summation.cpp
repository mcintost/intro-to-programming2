#include <iostream>
#include "Summation.h"

/*****************************************
** returns the sum of an array of doubles
** Parameters: const double* nums- pointer
** to first entry of array; int size- number
** of elements in array
******************************************/
double sum(const double* nums, int size)
{
	double sum = 0;

	for (int i = 0; i < size; i++)
		sum += nums[i];

	return sum;
}