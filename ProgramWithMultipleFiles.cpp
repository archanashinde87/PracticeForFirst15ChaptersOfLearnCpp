// ProgramWithMultipleFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "input.h"
#include <iostream>

int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}
