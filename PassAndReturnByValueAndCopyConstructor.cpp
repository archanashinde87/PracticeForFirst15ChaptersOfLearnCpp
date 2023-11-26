// PassAndReturnByValueAndCopyConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Fraction
{
    int m_numerator{ 0 };
    int m_denominator{ 1 };

public:

    // Default Constructor
    Fraction(int numerator = 0, int denominator = 1) : m_numerator{ numerator }, m_denominator{ denominator }
    {
    
    }

    // Copy Constructor
    Fraction(const Fraction& f) : m_numerator{ f.m_numerator }, m_denominator{f.m_denominator}
    {
        std::cout << "Copy constructor called.\n";
    }

    void print() const
    {
        std::cout << "Fraction(" << m_numerator << ", " << m_denominator << ")\n";
    }
};

void printFraction(Fraction f)  // f is pass by value
{
    f.print();
}

Fraction generateFraction(int n, int d)
{
    Fraction f{ n,d };
    return f;
}

int main()
{
    Fraction f{ 5,3 };
    printFraction(f); // f is copied into the function parameter using copy constructor
    
    Fraction f2{ generateFraction(1,2) }; // Fraction is returned using copy constructor
    printFraction(f2); // f is copied into the function parameter using copy constructor

    return 0;
}

