// DelegatingConstructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>
#include<string_view>

class Employee
{
    std::string m_name{};
    int m_id{0};
public:
    Employee(std::string_view name) :Employee{ name, 0 } // delegate initialization to Employee(std::string_view, int) constructor
    {
    }
    Employee(std::string_view name, int id) :m_name{ name }, m_id{ id } // actually initializes the members
    {
        std::cout << "Employee " << m_name << " created.\n";
    }

};
int main()
{
    Employee e1{ "Archana" };
    Employee e2{ "Shankar", 1 };

    return 0;
}

