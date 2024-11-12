// Write a program to implement single inheritance from the  following Refer Figure
#include <iostream>
using namespace std;
class employee
{
public:
    int emp_id;
    string name;
};
class emp_info : public employee
{
public:
    float salary;
    void getdata()
    {
        cout << "Enter employee id: ";
        cin >> emp_id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee salary:";
        cin >> salary;
    }
    void displaydata()
    {
        cout << "The employee id    :" <<emp_id<< endl;
        cout << "The employee name  :" <<name<< endl;
        cout << "The employee salary:" <<salary<<endl;
    }
};
int main()
{
    emp_info e;
    e.getdata();
    e.displaydata();
    return 0;
}