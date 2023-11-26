// ClassMemberInitializerList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Foo
{
    int m_x{};
    int m_y{};

public:

    Foo(int x, int y) : m_x{ x }, m_y{y}  // Member Initializer List
    {
        std::cout << "Foo(" << x << ", " << y << ") constructed.\n";
    }

    void print()
    {
        std::cout << "Foo(" << m_x << ", " << m_y << ")\n";
    }
};
int main()
{

    Foo foo{ 6,7 };
    foo.print();

    return 0;
}

