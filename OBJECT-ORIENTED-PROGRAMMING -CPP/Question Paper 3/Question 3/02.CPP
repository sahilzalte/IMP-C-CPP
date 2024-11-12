/* Write a program for get and put functions.*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream source("02_SOURCE.TXT");
    ofstream destination("02_DESTINATION.TXT");

    if (!source)
    {
        cout << "Error openning source file !";
    }

    if (!destination)
    {
        cout << "Error openning destination file !";
    }

    char sa;
    while (source.get(sa))
    {
        destination.put(sa);
    }

    source.close();
    destination.close();
    cout<<"File contain copy successfully";
    
    return 0;
}