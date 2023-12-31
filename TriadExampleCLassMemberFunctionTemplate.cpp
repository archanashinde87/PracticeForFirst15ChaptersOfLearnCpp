// TriadExampleCLassMemberFunctionTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

template<typename T, typename U, typename V>
class Triad
{
	T m_first{};
	U m_second{};
	V m_third{};

public:
	Triad(const T& first, const U& second,const V& third)
		: m_first{ first }
		, m_second{ second }
		, m_third{ third }
	{}

	const T& first() const { return m_first; }
	const U& second() const { return m_second; }
	const V& third() const { return m_third; }

	void print() const;

};

template<typename T, typename U, typename V>
void Triad<T, U, V>::print() const
{
	std::cout << "["  << m_first << ", " << m_second << ", " << m_third << "] ";
}
int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}

