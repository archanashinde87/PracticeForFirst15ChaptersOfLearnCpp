// FriendNonMemberFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Value
{
    int m_value{};
public:
    explicit Value(int value) :m_value{value}
    {}

    bool isEqualToMember(const Value& v);
    friend bool isEqualToNonMember(const Value& v1, const Value& v2);
};

bool Value::isEqualToMember(const Value& v)
{
    return m_value == v.m_value;
}
bool isEqualToNonMember(const Value& v1, const Value& v2)
{
    return v1.m_value == v2.m_value;
}
int main()
{
    Value v1{ 5 };
    Value v2{ 6 };

    std::cout << std::boolalpha << v1.isEqualToMember(v2) << '\n';
    std::cout << std::boolalpha << isEqualToNonMember(v1, v2) << '\n';

    return 0;
}

