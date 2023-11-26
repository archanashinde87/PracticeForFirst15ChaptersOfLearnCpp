// SimpleStructExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Employee
{
    int id{};
    int age{};
    double wage{};
};

int main()
{
    // Employee joe
    Employee joe{};
    joe.id = 14;
    joe.age = 32;
    joe.wage = 60000.0;

    // Employee frank
    Employee frank{};
    frank.id = 15;
    frank.age = 28;
    frank.wage = 45000.0;

    if (joe.wage > frank.wage)
        std::cout << "Joe makes more than Frank." << '\n';
    else if (joe.wage < frank.wage)
        std::cout << "Joe makes less than Frank." << '\n';
    else
        std::cout << "Joe and Frank make the same amount\n.";

    int totalAge = joe.age + frank.age;
    std::cout << "Total age of employees: " << totalAge << '\n';

    // Frank got promotion
    frank.wage += 5000.0;
    std::cout << "Frank's current wage is : " << frank.wage << '\n';

    // Today is Joe's birthday
    ++joe.age;
    std::cout << "Joe's age is : " << joe.age << '\n';

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
