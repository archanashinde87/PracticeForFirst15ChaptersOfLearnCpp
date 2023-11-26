// MemberInitializerListVsDefaultMemberInitializer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Foo
{
    int m_x{}; // default member initializer (will be ignored)
    int m_y{ 2 }; // default member initializer (will be used)
    int m_z; // no initializer
public:
    Foo(int x) : m_x{x} // member initializer list
    {
        std::cout << "Foo constructed\n";
    }
    void print()
    {
        std::cout << "Foo(" << m_x << ", " << m_y << ", " << m_z << ")\n";
    }
};
int main()
{
    Foo foo{ 4 };
    foo.print();
    return 0;
}

