// IntroductionToCopyConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Fraction
{
	int m_numerator{0};
	int m_denominator{1};

public:

	//Deault Constructor
	Fraction(int numerator = 0, int denominator = 1) : m_numerator{ numerator }, m_denominator{ denominator }
	{

	}

	void print() const
	{
		std::cout << "Fraction(" << m_numerator << ", " << m_denominator << ")\n";
	}
};

int main()
{
	Fraction f{ 5,3 };
	Fraction fCopy{ f };

	f.print();
	fCopy.print();

	return 0;
}

