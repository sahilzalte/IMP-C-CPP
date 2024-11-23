/*Write a C++ program to declare a class mobile having data
members as price and model number. Accept and display the
data for Ten objects.
*/
#include <iostream>
using namespace std;
class mobile
{
    public:
    int model;
    float price;
    
    void aceeptdata()
    {
        cout<<"Enter model number:";
        cin>>model;
        cout<<"Enter price :";
        cin>>price;
        cout<<endl;
    }

    void displaydata()
    {
        cout<<"Model number:"<<model<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<endl;
    }
};
int main()
{
    mobile m[10];
    for (int i = 0; i < 10; i++)
    {
        m[i].aceeptdata();
     
    }
    for (int i = 0; i < 10; i++)
    {
     
        m[i].displaydata();
    }
    

    return 0;
}