#include <iostream>
using namespace std;
class Myclass
{
public:
    int x;
    Myclass(int a)
    {
    x=a;
    cout<<"The parameterized constructor called:"<<a<<endl;
    }
};
int main()
{
    Myclass m(100);
    return 0;
}