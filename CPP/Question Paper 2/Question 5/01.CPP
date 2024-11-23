/*
Write a C++ program to declare a class train with
members as train no and name. Accept and display
data for one object of train. Use pointer to object to
call functions of class.
*/
#include <iostream>
using namespace std;
class train 
{
    public:
    int train_no;
    string train_name;

    void acceptdata()
    {
        cout<<"Enter train no  : ";
        cin>>train_no;
        cout<<"Enter train name: ";
        cin>>train_name;
    }
    void displaydata()
    {
        cout<<"Train no  : "<<train_no<<endl;
        cout<<"Train name: "<<train_name<<endl;
    }
};
int main()
{
    train t;
    train *ptr=&t;
    ptr->acceptdata();
    ptr->displaydata();
    return 0;
}