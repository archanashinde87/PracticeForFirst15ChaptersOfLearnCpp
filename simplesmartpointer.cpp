/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
class Resource
{
public:
    Resource(){std::cout << "Resource acquired\n";}
    ~Resource(){std::cout << "Resource destroyed\n";}
};

template<typename T>
class Auto_ptr
{
private:
    T* m_ptr;
public:
    Auto_ptr(T* ptr=nullptr)
    :m_ptr{ptr}
    {}
    ~Auto_ptr()
    {
        delete m_ptr;
    }
    T& operator*() const
    {
    	return *m_ptr;
    }
    T* operator->() const
    {
	    return m_ptr;
    }
};

int main()
{
	Auto_ptr<Resource> pRes(new Resource());
	return 0;
}

/*
Resource acquired
Resource destroyed
*/