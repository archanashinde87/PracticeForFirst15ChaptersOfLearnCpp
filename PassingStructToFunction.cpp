// PassingStructToFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Employee
{
	int id{};
	int age{};
	double wage{};
};

void printEmployee(const Employee& employee)
{
	std::cout << "Employee ID: " << employee.id << '\n';
	std::cout << "Employee Age: " << employee.age << '\n';
	std::cout << "Employee Wage: " << employee.wage << '\n';
}
int main()
{
	Employee joe{14, 32, 24.60};
	Employee frank{15, 28, 20.40};

	// print joe's information
	printEmployee(joe);

	std::cout << '\n';

	// print frank's information
	printEmployee(frank);

	return 0;
}
