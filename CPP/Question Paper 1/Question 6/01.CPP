#include <iostream>
#include <string>
using namespace std;

// Base Class: Student
class Student
{
protected:
    int roll_no;
    string name;

public:
    void getStudentDetails()
    {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin >> name;
    }

    void displayStudentDetails()
    {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived Class: Test inherits from Student
class Test : public Student
{
protected:
    float marks1, marks2;

public:
    void getMarks()
    {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
    }

    void displayMarks()
    {
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
    }
};

// Derived Class: Sports inherits from Student
class Sports 
{
protected:
    float score;

public:
    void getScore()
    {
        cout << "Enter sports score: ";
        cin >> score;
    }

    void displayScore()
    {
        cout << "Sports Score: " << score << endl;
    }
};

// Final Class: Result inherits from both Test and Sports
class Result : public Test, public Sports
{
    float total;

public:
    void calculateTotal()
    {
        total = marks1 + marks2 + score;
    }

    void displayResult()
    {
        // Displaying student details from the Test class (which inherits from Student)
        displayStudentDetails();  // No ambiguity here now as Student is inherited only once
        displayMarks();          // Marks from Test class
        displayScore();          // Score from Sports class
        cout << "Total Score: " << total << endl;
    }
};

int main()
{
    Result studentResult;

    studentResult.getStudentDetails(); // Get student details
    studentResult.getMarks();          // Get marks
    studentResult.getScore();          // Get sports score
    studentResult.calculateTotal();    // Calculate total
    studentResult.displayResult();     // Display all details and total

    return 0;
}
