/*
Write a program to declare a class ‘book’ containing data
members as ‘title’, ‘author-name’, ‘publication’, ‘price’.
Accept and display the information for one object using
pointer to that object.
*/
#include <iostream>
using namespace std;
class book
{
    public:
    string title;
    string author_name;
    string publication;
    float price;
    
    void acceptdata()
    {
        cout<<"Enter Title name  :";
        getline(cin,title);
        cout<<"Enter Author name :";
        getline(cin,author_name);
        cout<<"Enter Publication :";
        getline(cin,publication);
        cout<<"Enter Price :";
        cin>>price;
    }

    void displaydata()
    {
        cout<<"Title name  :"<<title<<endl;
        cout<<"Author name :"<<author_name<<endl;
        cout<<"Publication :"<<publication<<endl;
        cout<<"Price       :"<<price<<endl;
    }
};
int main()
{
    book b;
    book *ptr=&b;
    ptr->acceptdata();
    ptr->displaydata();
    return 0;
}