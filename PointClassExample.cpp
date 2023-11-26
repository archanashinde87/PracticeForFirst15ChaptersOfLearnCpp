// PointClassExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Point2d
{
    double m_x{ 0.0 };
    double m_y{ 0.0 };

public:
    // Default Consttructor
    Point2d(double x = 0.0, double y = 0.0) : m_x{ x }, m_y{ y }
    {
    
    }

    void print() const
    {
        std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
    }

    double distanceTo(const Point2d& pt) 
    {
        return std::sqrt((m_x - pt.m_x)*(m_x - pt.m_x) + (m_y - pt.m_y)*(m_y - pt.m_y));
    }

};
int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    // Point2d third{ 4.0 }; // should error if uncommented

    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}

