#include <iostream>
#include "Average.h"
#include "Summation.h"

/**********************************************
** Finds the average of an array of numbers
** calls function sum() declared in summation.h
** Parameters: const double* nums- array of doubles;
** int size- number of elements in array
** Output: returns the average value
**********************************************/
double avg(const double* nums, int size)
{
	return sum(nums, size) / size;
}
