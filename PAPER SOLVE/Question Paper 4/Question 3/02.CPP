#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("student_data.txt");

    if (!outfile)
    {
        cout<<"Error opening file for writing"<<endl;
        return 1;
    }
    outfile<<"sahil"<<endl;
    outfile.close();
    cout<<"Data writing to the file successfully";
    

    return 0;
}
// #include <iostream>
// #include <fstream> // For file operations
// using namespace std;

// int main()
// {
//     // Creating an object of ofstream to write data to a file
//     ofstream outFile("student_data.txt");

//     // Checking if the file is open
//     if (!outFile)
//     {
//         cout << "Error opening file for writing!" << endl;
//         return 1;
//     }

//     // Writing data into the file
//     outFile << "Student Name: John Doe" << endl;
//     outFile << "Roll No: 101" << endl;
//     outFile << "Age: 20" << endl;

//     // Closing the file after writing
//     outFile.close();

//     cout << "Data has been written to the file successfully!" << endl;

//     return 0;
// }