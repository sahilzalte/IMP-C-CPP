/* Write a program to declare a class ‘employee’ containing data
members ‘emp-id’ and ‘salary’. Accept and display this data
for 10 employees.*/
#include <iostream>
using namespace std;
class employee
{
    public:
    int emp_id;
    float salary;
    void accept()
    {
        cout<<"Enter employee id:";
        cin>>emp_id;
        cout<<"Enter employee salary:";
        cin>>salary;
        cout<<endl;
    }
    void display()
    {
        cout<<"Employee id:"<<emp_id<<endl;
        cout<<"Employee salary:"<<salary<<endl;
        cout<<endl;
    }

};
int main()
{
    employee e1[10];
    for (int  i = 0; i < 10; i++)
    {
        cout<<"Enter detail for employee:"<<i+1<<endl;
        e1[i].accept();
    }
    for (int  i = 0; i < 10; i++)
    {
        e1[i].display();
    }
    return 0;
}