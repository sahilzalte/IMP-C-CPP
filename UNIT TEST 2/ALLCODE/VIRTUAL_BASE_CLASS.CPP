#include <iostream>
using namespace std;

// Base class
class A
{
public:
    A()
    {
        cout << "Constructor of class A" << endl;
    }
};

// Derived classes
class B : virtual public A
{
public:
    B()
    {
        cout << "Constructor of class B" << endl;
    }
};

class C : virtual public A
{
public:
    C()
    {
        cout << "Constructor of class C" << endl;
    }
};

// Final derived class
class D : public B, public C
{
public:
    D()
    {
        cout << "Constructor of class D" << endl;
    }
};

int main()
{
    D obj; // Creating object of class D
    return 0;
}
