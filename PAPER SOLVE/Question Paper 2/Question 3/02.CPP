/*Write a C++ program to copy the contents of a source file
student 1.txt to a destination file student 2.txt using file
operations.
*/
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream sourcefile("student1.txt");
    ofstream destinationfile("student2.txt");

    if (!sourcefile)
    {
        cerr<<"Error opening source file !";
        return 1;
    }
    if (!destinationfile)
    {
        cerr<<"Error opening destination file !";
        return 1;
    }

    char sa;
    while (sourcefile.get(sa))
    {
    destinationfile.put(sa);
    }
    

    sourcefile.close();
    destinationfile.close();

    cout<<"File contain copy successfully";
    return 0;
}