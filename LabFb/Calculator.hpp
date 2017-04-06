/*********************************************************************
** Program Filename: LabFa
** Author: Thomas McIntosh
** Date: 7/31/2016
** Description: The header file for the calculator class 
** that uses a stack to to work as a RPN calculator.
*********************************************************************/

#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP
#include "Stack.hpp"
#include <string>
#include <iostream>

class Calculator
{
friend class Stack;

public:
	Calculator();
	void calculate(std::string);
	void addnumber(int);
	void stackChecker();
	bool isInside(std::string const &);
private:
	int a;
	int b;
	int catchS;
	Stack sck;
};
#endif // !CALCULATOR_HPP