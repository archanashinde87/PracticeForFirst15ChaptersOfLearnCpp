// StructSize.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Foo
{
    short a{};
    int b{};
    double c{};
};

struct Foo1
{
    short a{}; // It will have 2 bytes of padding after a
    int b{};
    short c{}; // It will have 2 bytes of padding after c
};

struct Foo2
{
    int b{};
    short a{};
    short c{};
};


int main()
{
    std::cout << "The size of short is : " << sizeof(short) << " bytes" << '\n';
    std::cout << "The size of int is : " << sizeof(int) << " bytes" << '\n';
    std::cout << "The size of double is : " << sizeof(double) << " bytes" << '\n';
    std::cout << "The size of struct Foo is : " << sizeof(Foo) << " bytes" << '\n';
    std::cout << "The size of struct Foo1 is : " << sizeof(Foo1) << " bytes" << '\n';
    std::cout << "The size of struct Foo2 is : " << sizeof(Foo2) << " bytes" << '\n';

    return 0;
}

