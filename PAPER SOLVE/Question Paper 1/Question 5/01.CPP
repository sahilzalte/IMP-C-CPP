// Write a program to declare a class ‘student’ having data
// members as ‘stud_name’ and ‘roll_no’. Accept and display
// this data for 5 students.
#include <iostream>
using namespace std;
class student
{
public:
    string stud_name;
    int roll_no;
    void acceptdata()
    {
        cout << "Enter student name:";
        cin >> stud_name;
        cout << "Enter student Roll No:";
        cin >> roll_no;
    }
    void displaydata()
    {
        cout << "Student Name : " << stud_name << endl;
        cout << "Student Roll No : " << roll_no << endl;
    }
};
int main()
{
    student s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i].acceptdata();
        cout<<endl;
    }
    for (int i = 0; i < 5; i++)
    {
        s[i].displaydata();
         cout<<endl;
    }

    return 0;
}