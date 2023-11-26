// BasicConstructorExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Foo
{
	int m_x{};
	int m_y{};

public:
	Foo(int x, int y)
	{
		std::cout << "Foo(" << x << "," << y << ") constructed.\n";
	}
	void print() const
	{
		std::cout << "Foo(" << m_x << "," << m_y << ")\n";
	}
};
int main()
{
	Foo foo{ 5,6 }; // calls Foo(int, int) constructor
	foo.print();

	return 0;
}
