// UsesOfthisPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Calc
{
    int m_value{};

public:
    Calc& add(int value) 
    {
        m_value += value;
        return *this;
    }

    Calc& sub(int value)
    {
        m_value -= value;
        return *this;
    }

    Calc& multiply(int value)
    {
        m_value *= value;
        return *this;
    }

    int getValue()
    {
        return m_value;
    }

};
int main()
{
    Calc calc{};
    calc.add(5).sub(3).multiply(4); // method/function chaining

    std::cout << calc.getValue();

    return 0;
}
