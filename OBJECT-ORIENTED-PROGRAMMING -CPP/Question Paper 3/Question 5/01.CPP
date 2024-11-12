#include <iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;

public:
    // Constructor to initialize the Person object
    Person(string n, int a) : name(n), age(a) {}

    // Function to display person information
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Friend function that takes a Person object as an argument
    friend void showPersonInfo(Person p);
};

// Function that takes a Person object as an argument
void showPersonInfo(Person p)
{
    cout << "Showing person information inside function:" << endl;
    p.display();
}

int main()
{
    // Creating a Person object
    Person person1("Alice", 25);

    // Passing the Person object to the function
    showPersonInfo(person1);

    return 0;
}
