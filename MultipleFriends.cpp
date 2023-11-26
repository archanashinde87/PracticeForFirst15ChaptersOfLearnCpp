// MultipleFriends.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Humidity;
class Temperature
{
    int m_temp{};
public:
    Temperature(int temp) : m_temp{ temp }
    {
    }
    friend void printWeather(const Temperature& t, const Humidity& h);
};
class Humidity
{
    int m_humidity{};
public:
    Humidity(int humidity) : m_humidity{ humidity }
    {
    }
    friend void printWeather(const Temperature& t, const Humidity& h);

};

void printWeather(const Temperature& t, const Humidity& h)
{
    std::cout << "The temparature is " << t.m_temp << " and the humidity is " << h.m_humidity << '\n';
}

int main()
{
    Temperature temp{ 40 };
    Humidity hum{ 23 };

    printWeather(temp, hum);

    return 0;
}

