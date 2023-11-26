// FriendClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Storage
{
    int m_nValue{};
    double m_dValue{};

public:
    Storage(int nValue, double dValue) :m_nValue{ nValue }, m_dValue{ dValue }
    {}

    friend class Display;
};
class Display
{
    bool m_displayIntFirst{};

public:
    Display(bool displayIntFirst) :m_displayIntFirst{ displayIntFirst }
    {}
    void displayStorage(const Storage& storage)
    {
        if (m_displayIntFirst)
            std::cout << storage.m_nValue << ' ' << storage.m_dValue << '\n';
        else
            std::cout << storage.m_dValue << ' ' << storage.m_nValue << '\n';
    }

    void setDisplayIntFirst(bool b)
    {
        m_displayIntFirst = b;
    }
};
int main()
{
    Storage storage{ 5, 6.7 };
    Display display{ false };

    display.displayStorage(storage);
    display.setDisplayIntFirst(true);
    display.displayStorage(storage);

    return 0;

}

