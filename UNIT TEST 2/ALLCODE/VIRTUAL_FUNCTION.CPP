#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    { // Virtual function
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base
{
public:
    void display() override
    { // Overriding the virtual function
        cout << "Display from Derived class" << endl;
    }
};

int main()
{
    Base *basePtr=new Derived; // Pointer of type Base
    
    // Calling virtual function using base class pointer
    basePtr->display(); // Calls Derived class's display() because of virtual function

    return 0;
}
