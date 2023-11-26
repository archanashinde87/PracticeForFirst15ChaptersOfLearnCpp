// NestedMemberTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Fruit
{
public:

    enum Type
    {
        apple,
        banana,
        cherry
    };

private:

    Type m_type{};
    int m_percentageEaten{};

public:

    Fruit(Type type) :m_type{ type }
    {
    }
    Type getType() { return m_type; }
    int getPercentageEaten() { return m_percentageEaten; }

    bool isCherry() { return m_type == cherry; } //Inside members of Fruit, we no longer need to prefix enumerators with Type::
};

int main()
{
    // Note: Outside the class, we access the enumerators via the Fruit:: prefix now
    Fruit apple{ Fruit::apple };

    if (apple.getType() == Fruit::apple)
        std::cout << "I am an apple.\n";
    else
        std::cout << "I am not an apple.\n";

    return 0;

}

