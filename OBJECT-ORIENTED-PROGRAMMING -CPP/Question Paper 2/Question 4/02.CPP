/*Write a C++ program to find and display the smallest
number of an array.
*/
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 1, 9}, min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    
    cout << "Smallest number: " << min;
    return 0;
}
