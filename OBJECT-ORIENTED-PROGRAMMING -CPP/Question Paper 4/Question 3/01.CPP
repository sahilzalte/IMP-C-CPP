/* Write a C++ program to define structure student having data
members name, roll no., age. Accept and display data for one
student.*/
#include <iostream>
using namespace std;
struct student
{
    string name;
    int roll_no;
    int age;
};

int main()
{
    student s;
    cout << "Enter name of student:";
    cin >> s.name;
    cout << "Enter roll no of student:";
    cin >> s.roll_no;
    cout << "Enter age of student :";
    cin >> s.age;

    cout << endl;
    
    cout << "Name of student :" << s.name << endl;
    cout << "Roll no of student :" << s.roll_no << endl;
    cout << "Age of student :" << s.age << endl;
    return 0;
}