// ImplicitDefaultConstructorVsEmptyUserConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class User
{
    int m_a;  // no default initialization value
    int m_b{};

public:
    User() // user provided empty constructor
    {

    }

    int a() const { return m_a; }
    int b() const { return m_b; }
};
class Default
{
    int m_a; // no default initialization value
    int m_b{};

public:
    Default() = default; // explicitly defaulted default constructor

    int a() const { return m_a; }
    int b() const { return m_b; }

};
class Implicit
{
    int m_a; // no default initialization value
    int m_b{};

public:

    // Impicit Default Constructor
    int a() const { return m_a; }
    int b() const { return m_b; }

};
int main()
{
    User user{}; // default initialized
    std::cout << user.a() << ' ' << user.b() << '\n';

    Default def{}; // zero initialized, then default initialized
    std::cout << def.a() << ' ' << def.b() << '\n';

    Implicit implicit{}; // zero initialized, then default initialized
    std::cout << implicit.a() << ' ' << implicit.b() << '\n';
    return 0;
}

