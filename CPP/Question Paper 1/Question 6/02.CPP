#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream sourcefile("02_SOURCE.TXT");
    ofstream destinationfile("DESTINATION.TXT");

    if (!sourcefile)
    {
        cout << "Error opening source file !" << endl;
        return 1;
    }
    if (!destinationfile)
    {
        cout << "Error opening destination file !" << endl;
        return 1;
    }
    char sa;
    while (sourcefile.get(sa))
    {
        destinationfile.put(sa);
    }
    sourcefile.close();
    destinationfile.close();

    cout<<"File contain copy Successfully";
    return 0;
}

// #include <iostream>
// #include <fstream> // For file handling
// using namespace std;
// int main()
// {
//     ifstream sourceFile("02_SOURCE.TXT");    // Open source file
//     ofstream destFile("DESTINATION.TXT"); // Open destination file

//     // Check if source file is open
//     if (!sourceFile)
//     {
//         cerr << "Error opening source file!" << endl;
//         return 1;
//     }

//     // Check if destination file is open
//     if (!destFile)
//     {
//         cerr << "Error opening destination file!" << endl;
//         return 1;
//     }

//     // Copy contents from source file to destination file
//     char ch;
//     while (sourceFile.get(ch))
//     {                     // Read each character from source file
//         destFile.put(ch); // Write the character to the destination file
//     }

//     // Close both files
//     sourceFile.close();
//     destFile.close();

//     cout << "File content copied successfully!" << endl;
//     return 0;
// }
