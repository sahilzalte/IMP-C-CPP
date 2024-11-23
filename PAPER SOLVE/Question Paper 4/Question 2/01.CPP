/* Write a C++ program to find out whether the given number
is even or odd (taking input from keyboard).*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number :";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }

    return 0;
}