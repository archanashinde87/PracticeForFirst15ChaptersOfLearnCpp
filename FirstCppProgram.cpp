// FirstCppProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getInputFromUser()
{
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;
	return x;
}
int doubleNumber(int input)
{
	return 2 * input;
}
void printOutput(int doubleNum)
{
	std::cout << "Doubled value of num is : " << doubleNum << '\n';
}

int main()
{
	int doubleNum = doubleNumber(getInputFromUser());
	printOutput(doubleNum);
	return 0;
}

