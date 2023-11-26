// CopyElisionCompilerOptimizationTechnique.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Something
{
    int m_x{};

public:
    Something(int x) : m_x{ x }
    {
        std::cout << "Parameterized Constructor\n";
    }

    Something(const Something& s) : m_x{ s.m_x }
    {
        std::cout << "Copy Constructor\n";
    }

    void print() const
    {
        std::cout << "Something(" << m_x << ")\n";
    }

};
int main()
{
    Something s{ Something{5} }; // VS2022 and compiler optimized and avoid call to copy constructor 
    s.print();
    return 0;
}

