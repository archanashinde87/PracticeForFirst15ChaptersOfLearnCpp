// StringProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

int main()
{
	std::cout << "Enter your full name : ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);

	std::cout << "Enter your age : ";
	int age{};
	std::cin >> age;

	int nameLength{ static_cast<int>(name.length()) };
	std::cout << "Your age + length of name is : " << age + nameLength;

	return 0;

}

