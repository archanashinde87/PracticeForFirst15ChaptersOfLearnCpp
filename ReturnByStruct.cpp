// ReturnByStruct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Point3d
{
    double m_x{0.0};
    double m_y{0.0};
    double m_z{0.0};
};

Point3d getZeroPoint()
{
    return { 0.0, 0.0, 0.0 };
}
int main()
{
    Point3d zero{ getZeroPoint() };

    if (zero.m_x == 0.0 && zero.m_y == 0.0 && zero.m_z == 0.0)
        std::cout << "The point is zero.\n";
    else
        std::cout << "The point is not zero.\n";

    return 0;
}
