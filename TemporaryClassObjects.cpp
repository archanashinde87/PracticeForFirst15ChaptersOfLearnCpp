// TemporaryClassObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class IntPair
{
    int m_x{};
    int m_y{};

public:
    IntPair(int x, int y) : m_x{ x }, m_y{ y }
    {
        
    }

    int x() const { return m_x; }
    int y() const { return m_y; }

};

void print(IntPair p)
{
    std::cout << "(" << p.x() << ", " << p.y() << ")\n";
}

// Case 1: Create named variable and return
IntPair ret1()
{
    IntPair p{ 10,11 };
    return p;
}

// Case 2: Create temporary IntPair and return
IntPair ret2()
{
    return IntPair{ 12, 13 };
}

// Case 3: implicitly convert { 14, 15 } to IntPair and return
IntPair ret3()
{
    return{ 14, 15 };
}

int main()
{
    // Case 1: Pass variable
    IntPair p1{ 5,6 };
    print(p1);

    // Case 2: Construct temporary IntPair and pass to function
    print(IntPair{ 2,3 });

    // Case 3: Implicitly convert { 7, 8 } to a temporary IntPair and pass to function
    print({ 8,9 });

    print(ret1());
    print(ret2());
    print(ret3());

    return 0;
}

