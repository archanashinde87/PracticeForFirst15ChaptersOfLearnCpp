// EncapsulationDataHiding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<string_view>

class Employee
{
	std::string m_name{};
	char m_firstInitial{};

public:
	void print() const
	{
		std::cout  << "Employee " << m_name << " has first initial " << m_firstInitial << '\n';
	}

	void setName(std::string_view name)
	{
		m_name = name;
		m_firstInitial = name.front(); // use std::string::front() to get first letter of 'name'
	}
};
int main()
{
	Employee e{};
	e.setName("John");
	e.print();

	e.setName("Mark");
	e.print();

	return 0;

}
