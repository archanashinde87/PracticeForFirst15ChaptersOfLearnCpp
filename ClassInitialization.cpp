// ClassInitialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Foo
{
public:
    // Default Constructor
    Foo()
    {
        std::cout << "Foo() called\n";
    }

    // Copy Constructor
    Foo(const Foo& f)
    {
        std::cout << "Foo(const Foo&) called\n";
    }

    // Parameterized Constructor
    Foo(int x)
    {
        std::cout << "Foo(int) " << x << " called\n";
    }
};
int main()
{
    // Calls Foo() default constructor
    Foo f1;           // default initialization
    Foo f2{};         // value initialization (preferred)

    // Calls Foo(int) parameterized constructor
    Foo f3 = 3;       // copy initialization (non-explicit constructors only)
    Foo f4(4);        // direct initialization
    Foo f5{ 5 };      // direct list initialization (preferred)
    Foo f6 = { 6 };   // copy list initialization (non-explicit constructors only)

    // Calls Foo(const Foo&) copy constructor
    Foo f7 = f3;      // copy initialization
    Foo f8(f3);       // direct initialization
    Foo f9{ f3 };     // direct list initialization (preferred)
    Foo f10 = { f3 }; // copy list initialization

    return 0;
}

