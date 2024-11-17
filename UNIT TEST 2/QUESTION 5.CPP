/*  Write a program for closing a file.*/
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("example.txt");
    file << "Hello, world!";
    file.close(); // Closing the file
    cout << "File closed successfully!";
    return 0;
}
