// MemberSelectionWithPointersAndReferences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Employee
{
    int id{};
    int age{};
    double wage{};
};

//Member Selection for references to structs
void printEmployee(const Employee& e)
{
    std::cout << "Id: " << e.id << '\n';
    std::cout << "Age: " << e.age << '\n';
    std::cout << "Wage: " << e.wage << '\n';

}

struct Paw
{
    int claws{};
};

struct Animal
{
    std::string name{};
    Paw paw{};
};

int main()
{
    Employee joe{ 1, 30, 45000.0 };

    ++joe.age;
    joe.wage = 48000.0;

    // print joe's information
    printEmployee(joe);

    // Member Selection for pointers to structs
    Employee* ptr{ &joe };
    std::cout << ptr->id << '\n'; // Better: use -> to select member from pointer to object instead of (*ptr).id

    Animal puma{ "Puma", { 5 } };

    Animal* ptr1{ &puma };

    // ptr is a pointer, use ->
    // paw is not a pointer, use .

    std::cout << (ptr1->paw).claws << '\n';

    return 0;

}
