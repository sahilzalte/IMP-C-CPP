#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class constructor called." << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived class constructor called." << endl;
    }
};

int main()
{
    Derived obj; // Create an object of the Derived class
    return 0;
}
