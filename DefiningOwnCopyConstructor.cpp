// DefiningOwnCopyConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	Fraction(const Fraction& f) : m_numerator{ f.m_numerator }, m_denominator{f.m_denominator} // Initialize our members using the corresponding member of the parameter
	{
		std::cout << "Copy Constructor Called.\n"; // just to prove it works
	}

	void print() const
	{
		std::cout << "Fraction(" << m_numerator << ", " << m_denominator << ")\n";
	}
	
};
int main()
{
	Fraction f{ 1, 2 };  // Calls Fraction(int, int) constructor
	Fraction fCopy{ f }; // Calls Fraction(const Fraction&) copy constructor

	f.print();
	fCopy.print();

	return 0;
}
