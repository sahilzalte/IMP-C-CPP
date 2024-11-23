// /* Write a C++ program to implement following inheritance:
// Refer Fig*/

#include <iostream>
using namespace std;
class Class1
{
public:
    float m1;

    void getData()
    {
        cout << "Enter marks for Class 1 (m1): ";
        cin >> m1;
    }

};

class Class2
{
public:
    float m2;

    void getData()
    {
        cout << "Enter marks for Class 2 (m2): ";
        cin >> m2;
    }

friend void calculateAverage(Class1 c1, Class2 c2)
{
    cout << "The average of marks is: " << (c1.m1 + c2.m2) / 2 << endl;
}

};
int main()
{
    Class1 student1;
    Class2 student2;

    student1.getData();
    student2.getData();

    calculateAverage(student1, student2);
    return 0;
}