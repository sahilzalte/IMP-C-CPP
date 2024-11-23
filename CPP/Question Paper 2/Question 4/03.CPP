/* Write a C++ program to declare a structure book with
members as book id and name. Accept and display data
of five books using array of structure.
*/
#include <iostream>
using namespace std;
struct book
{
    int id;
    string name;
};

int main()
{
    book b[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter book id for book "<<(i+1)<<":";
        cin>>b[i].id;
        cout<<"Enter book name for book "<<(i+1)<<":";
        cin>>b[i].name;
        cout<<endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"Book id:"<<b[i].id<<endl;
        cout<<"Book name:"<<b[i].name<<endl;
    }
    
    
    return 0;
}