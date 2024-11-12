#include <iostream>
using namespace std;
class single
{
public:
    void show1()
    {
        cout << "Hello From single class"<<endl;
    }
};
class derived : public single
{
public:
    void show2()
    {
        cout << "Hello From derived class"<<endl;
    }
};
class ultra : public derived 
{
    public:
    void show3()
    {
        cout<<"Hello From ultra class"<<endl;
    }
};
int main()
{
    ultra u;
    u.show1();
    u.show2();
    u.show3();
    return 0;
}