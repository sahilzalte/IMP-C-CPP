/*Write a program to print first n natural numbers and their  
sum using for loop.
*/
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter natural number :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        sum += i;
    }

    cout << "The sum of natural numbers of " << n << ":" << sum;
    return 0;
}