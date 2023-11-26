// StructInitialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Something
{
    int x;       // no default initialization value (bad)
    int y{};    // value-initialized by default
    int z{ 2 }; // explicit default value
};

int main()
{
    Something s1;             // No initializer list: s1.x is uninitialized, s1.y and s1.z use defaults
    Something s2{ 5, 6, 7 }; // Explicit initializers: s2.x, s2.y, and s2.z use explicit values (no default values are used)
    Something s3{};          // Missing initializers: s3.x is value initialized, s3.y and s3.z use defaults

    std::cout << "Struct s1 : ";
    std::cout << s1.x << ' ' << s1.y << ' ' << s1.z << '\n';
    std::cout << "Struct s2 : ";
    std::cout << s2.x << ' ' << s2.y << ' ' << s2.z << '\n';
    std::cout << "Struct s3 : ";
    std::cout << s3.x << ' ' << s3.y << ' ' << s3.z << '\n';

    return 0;
}
