// ReducingConstructorsUsingDefaultArgument.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<string_view>

class Employee
{
    std::string m_name{};
    int m_id{ 0 };

public:
    Employee(std::string_view name, int id = 0) : m_name{ name }, m_id{ id } // default argument for id
    {
        std::cout << "Employee " << m_name << " created.\n";
    }

};

int main()
{
    Employee e1{ "Archana" };
    Employee e2{ "Shanky", 44 };

    return 0;
}
