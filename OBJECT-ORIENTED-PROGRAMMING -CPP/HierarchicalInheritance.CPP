#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Eating" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meowing" << endl;
    }
};

int main()
{
    Animal a1;
    Dog d1;
    Cat c1;
    a1.eat();
    d1.bark();
    c1.meow();
    return 0;
}