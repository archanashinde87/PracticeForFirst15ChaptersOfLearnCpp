// StaticMemberVariable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Something
{
    static inline int m_idGenerator{ 1 }; // Making static members inline or constexpr so they can be initialized inside the class definition.
    int m_id{};
public:
    Something()
    {
        m_id = m_idGenerator++;  // grab the next value from the id generator
    }

    int getID() const { return m_id; }
};
int main()
{
    Something first{};
    Something second{};
    Something third{};

    std::cout << first.getID() << '\n';
    std::cout << second.getID() << '\n';
    std::cout << third.getID() << '\n';

    return 0;

}

