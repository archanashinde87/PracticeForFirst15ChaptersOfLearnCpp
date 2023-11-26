// ConstObjectAndConstMemberFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Something
{
    void print() // non-const
    {
        std::cout << "non-const print()\n";
    }
    void print() const // const
    {
        std::cout << "const print()\n";
    }

};
int main()
{
    Something s1{};
    s1.print(); // calls print()

    const Something s2{};
    s2.print(); // calls print() const

    return 0;
}

