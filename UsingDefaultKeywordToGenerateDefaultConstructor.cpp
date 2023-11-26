// UsingDefaultKeywordToGenerateDefaultConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Foo
{
    int m_x{};
    int m_y{};

public:
    Foo() = default; // generate an implicit default constructor

    Foo(int x, int y) : m_x{ x }, m_y{ y }
    {
        std::cout << "Foo(" << x<<", " << y  << ") constructed\n";
    }
};
int main()
{ 
    Foo{}; // calls Foo() default constructor
    Foo{ 6,7 };
    return 0;
}

