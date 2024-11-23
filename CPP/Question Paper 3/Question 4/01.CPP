/* Write a program for closing a file. */
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("01_EXAMPLE.TXT");
    
    if (!file)
    {
        cout<<"file not open !"<<endl;
    }
    else
    {

        cout<<"File open successfully !"<<endl;
    }
    file.close();
    cout<<"File Close succesfully";

    return 0;
}