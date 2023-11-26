// CopyConstructorUsingEqualDeleteKeywordToPreventCopies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Fraction
{
    int m_numerator{ 0 };
    int m_denominator{ 1 };

public:

    //Default Constructor
    Fraction(int numerator = 0, int denominator = 1) : m_numerator{ numerator }, m_denominator{denominator}
    {
    }

    Fraction(const Fraction& f) = delete;

    void print() const
    {
        std::cout << "Fraction(" << m_numerator << ", " << m_denominator << ")\n";
    }

};
int main()
{
    Fraction f{ 2,3 };
   // Fraction fCopy{ f };  // compile error: copy constructor has been deleted

    f.print();
    //fCopy.print();

    return 0;
}

