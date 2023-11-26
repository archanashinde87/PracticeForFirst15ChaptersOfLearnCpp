// ClassTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <typename T>
struct Pair
{
    T first{};
    T second{};
};

template<typename T>
constexpr T max(Pair<T> p)
{
    return (p.first < p.second ? p.second : p.first);
}


int main()
{
    Pair<int> p1{ 5,6 }; // instantiates Pair<int> and creates object p1
    std::cout << p1.first << ' ' << p1.second << '\n';
    std::cout << max<int>(p1) << " is larger\n"; // explicit call to max<int>


    Pair<double> p2{ 1.2,3.4 }; // instantiates Pair<double> and creates object p2
    std::cout << p2.first << ' ' << p2.second << '\n';
    std::cout << max<double>(p2) << " is larger\n";

    Pair<double> p3{ 7.8,9.0 }; // creates object p3 using prior definition for Pair<double>
    std::cout << p3.first << ' ' << p3.second << '\n';
    std::cout << max<double>(p3) << " is larger\n";

    return 0;
}

