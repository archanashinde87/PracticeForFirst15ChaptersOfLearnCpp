// NestedTypeDefTypeAliases.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<string_view>

class Employee
{
public:
    using IDType = int;

private:
    std::string m_name{};
    IDType m_id{};
    double m_wage{};

public:
    Employee(std::string_view name, IDType id, double wage)
        :m_name{ name }, m_id{ id }, m_wage{ wage }
    {}

    const std::string& getName() { return m_name; }
    IDType getID() { return m_id; } // can use unqualified name within class

};
int main()
{
    Employee john{ "John", 1, 45000 };
    Employee::IDType id{ john.getID() }; // must use fully qualified name outside class

    std::cout << john.getName() << " has id: " << id << '\n';

    return 0;
}

