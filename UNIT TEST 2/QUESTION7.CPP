/* Give the syntax for a constructor in a derived class.*/
#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Base class constructor." << endl; }
};

class Derived : public Base
{
public:
    Derived() : Base() { cout << "Derived class constructor." << endl; }
};
int main()
{     
    Base b;

    return 0;
}