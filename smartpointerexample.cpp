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
    Auto_ptr(const Auto_ptr& src)
    {
        m_ptr = new T;
        *m_ptr = *src.m_ptr;
    }
    Auto_ptr(Auto_ptr&& src)
    {
        m_ptr = src.m_ptr;
        src.m_ptr = nullptr;
    }
    Auto_ptr& operator=(const Auto_ptr& src)
    {
        if(&src==this)
            return *this;
        delete m_ptr;
        
        m_ptr = new T;
        *m_ptr = *src.m_ptr;
        
        return *this;
    }
    Auto_ptr& operator=(Auto_ptr&& src)
    {
        if(&src==this)
            return *this;
        
        delete m_ptr;
        
        m_ptr = src.m_ptr;
        src.m_ptr = nullptr;
        
        return *this;
    }

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

Auto_ptr<Resource> generateResource()
{
	Auto_ptr<Resource> res{new Resource};
	return res; // this return value will invoke the move constructor
}

int main()
{
	Auto_ptr<Resource> mainres;
	mainres = generateResource(); // this assignment will invoke the move assignment

	return 0;
}
/*
Resource acquired
Resource destroyed
*/