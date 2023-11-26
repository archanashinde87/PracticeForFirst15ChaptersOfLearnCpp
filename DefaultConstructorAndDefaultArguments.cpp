// DefaultConstructorAndDefaultArguments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Foo
{
	int m_x{};
	int m_y{};

public :
	Foo(int x=0, int y=0) : m_x{ x }, m_y{y} // has default arguments
	{
		std::cout << "Foo(" << x << ", " << y << ") constructed\n";
	}
};
int main()
{
	Foo foo1{};  // calls Foo(int, int) constructor using default arguments
	Foo foo2{ 6,7 }; // calls Foo(int, int) constructor
	return 0;
}

