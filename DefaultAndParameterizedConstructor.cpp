// DefaultAndParameterizedConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Foo
{
    int m_x{};
    int m_y{};

public:

    Foo() // default constructor
    {
        std::cout << "Foo constructed\n";
    }
    Foo(int x, int y) : m_x{ x }, m_y{y} // non-default constructor
    {
        std::cout << "Foo(" << x << ", " << y << ") constructed\n";
    }
};
int main()
{
    Foo{}; // calls deault constructor
    Foo{6,7}; // calls non-default(parameterized) constructor
    return 0;
}

