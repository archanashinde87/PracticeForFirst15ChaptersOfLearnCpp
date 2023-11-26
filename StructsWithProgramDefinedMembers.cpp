// StructsWithProgramDefinedMembers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Employee
{
    int id{};
    int age{};
    double wage{};
};

struct Company
{
    int numOfEmployees{};
    Employee CEO{};
};

int main()
{
    Company myCompany{ 7, {1, 40, 70000.0} };
    std::cout << "CEO has $" << myCompany.CEO.wage << " yearly.\n";
    return 0;
}
