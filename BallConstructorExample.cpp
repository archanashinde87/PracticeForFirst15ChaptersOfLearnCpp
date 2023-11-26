// BallConstructorExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>
#include<string_view>

class Ball
{
	std::string m_color{"Unknown"};
	double m_radius{0.0};

public:
	Ball(std::string_view color, double radius) : m_color{ color }, m_radius{radius}
	{
	}

	void print()
	{
		std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
	}

};
int main()
{
	Ball blue{ "blue", 10.0 };
	blue.print();

	Ball red{ "red", 12.0 };
	red.print();

	return 0;
}
