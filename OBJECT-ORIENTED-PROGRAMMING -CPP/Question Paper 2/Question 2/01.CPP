#include <iostream>
using namespace std;

class College
{
public:
    string collegeName;
    int collegeCode;

    void getCollegeData()
    {
        cout << "Enter College name: ";
        cin >> collegeName;
        cout << "Enter College code: ";
        cin >> collegeCode;
    }
};

class Student : public College
{
public:
    string studentName;

    void getStudentInfo()
    {
        cout << "Enter Student name: ";
        cin >> studentName;
    }

    void displayAllInfo()
    {
        cout << "\nCollege Name: " << collegeName << endl;
        cout << "College Code: " << collegeCode << endl;
        cout << "Student Name: " << studentName << endl;
    }
};

int main()
{
    Student s;
    s.getCollegeData();
    s.getStudentInfo();
    s.displayAllInfo();
    return 0;
}
