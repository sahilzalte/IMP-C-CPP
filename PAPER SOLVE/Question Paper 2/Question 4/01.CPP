/*
Write a C++ program to overload add function to add two
integer numbers and two float numbers.
*/
#include <iostream>
using namespace std;
void add(int x, int y)
{
    cout << "Addtion of two integer Number:" << (x+y)<<endl;
}
void add(float x, float y)
{
    cout << "Addition of two float Number :" << (x+y)<<endl;
}
int main()
{
    add(1,2);
    add(3.5f, 8.7f);
    return 0;
}