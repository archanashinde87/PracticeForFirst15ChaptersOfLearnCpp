// FriendMemberFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Storage;

class Display
{
    bool m_displayIntFirst{};

public:
    Display(bool displayIntFirst) : m_displayIntFirst{ displayIntFirst }
    {}
    void displayStorage(const Storage& storage);
};

class Storage
{
    int m_nValue{};
    double m_dValue{};

public:
    Storage(int nValue, double dValue) :m_nValue{ nValue }, m_dValue{ dValue }
    {}

    friend void Display::displayStorage(const Storage& storage);
};

void Display::displayStorage(const Storage& storage)
{
    if (m_displayIntFirst)
        std::cout << storage.m_nValue << ' ' << storage.m_dValue << '\n';
    else
        std::cout << storage.m_dValue << ' ' << storage.m_nValue << '\n';
}
int main()
{
    Storage storage{ 4, 5.6 };
    Display display{ false };

    display.displayStorage(storage);

    return 0;

}

