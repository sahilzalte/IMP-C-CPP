/*Write a C++ program to declare a class student with data
members as roll no and name. Declare a constructor to
initialize data members of class. Display the data.
*/
#include <iostream>
using namespace std;

class Student
{
public:
    int roll_no;
    string name;

    // Constructor to initialize data members
    Student()
    {
        cout << "Enter student Roll no: ";
        cin >> roll_no;
        cout << "Enter Student Name: ";
        cin >> name;
    }

    // Function to display student data
    void display()
    {
        cout << endl;
        cout << "Student Roll no: " << roll_no << endl;
        cout << "Student Name   : " << name << endl;
    }
};

int main()
{
    Student s1;   // Constructor initializes data
    s1.display(); // Display student data
    return 0;
}
