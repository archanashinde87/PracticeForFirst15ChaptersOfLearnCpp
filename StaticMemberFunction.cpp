// StaticMemberFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Something
{
    static inline int s_nextID{ 1 };

public:

    static int getNextID();
};
int Something::getNextID()
{
    return s_nextID++;
}
int main()
{
    for (int count{ 0 }; count < 5; count++)
        std::cout << "The next ID is: " << Something::getNextID() << '\n';

    return 0;
}

