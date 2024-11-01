#include <iostream>
#include <string>
#include <vector>
#include <limits> // Include this header

using namespace std;

struct Student {
    string name;
    int rollNumber;
    string course;
    float cgpa;
};

// Function to add student details
void addStudent(vector<Student>& students) {
    Student newStudent;
    cout << "Enter student name: ";
    cin >> newStudent.name;
    cout << "Enter roll number: ";
    cin >> newStudent.rollNumber;
    cout << "Enter course: ";
    cin >> newStudent.course;
    
    // Loop until a valid float CGPA is entered
    while (true) {
        cout << "Enter CGPA: ";
        cin >> newStudent.cgpa;
        
        // Check if the input is valid
        if (cin.fail()) {
            cin.clear(); // clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid CGPA. Please enter a numeric value.\n";
        } else {
            break; // valid CGPA, exit loop
        }
    }
    
    students.push_back(newStudent);
    cout << "Student added successfully!\n";
}

// Function to display student details
void displayStudents(const vector<Student>& students) {
    cout << "Student Details:\n";
    for (const auto& student : students) {
        cout << "Name: " << student.name << "\n";
        cout << "Roll Number: " << student.rollNumber << "\n";
        cout << "Course: " << student.course << "\n";
        cout << "CGPA: " << student.cgpa << "\n\n";
    }
}

// Function to search student by roll number
void searchStudent(const vector<Student>& students) {
    int rollNumber;
    cout << "Enter roll number to search: ";
    cin >> rollNumber;
    for (const auto& student : students) {
        if (student.rollNumber == rollNumber) {
            cout << "Student found!\n";
            cout << "Name: " << student.name << "\n";
            cout << "Course: " << student.course << "\n";
            cout << "CGPA: " << student.cgpa << "\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

// Function to update student details
void updateStudent(vector<Student>& students) {
    int rollNumber;
    cout << "Enter roll number to update: ";
    cin >> rollNumber;
    for (auto& student : students) {
        if (student.rollNumber == rollNumber) {
            cout << "Enter new name: ";
            cin >> student.name;
            cout << "Enter new course: ";
            cin >> student.course;
            cout << "Enter new CGPA: ";
            cin >> student.cgpa;
            cout << "Student updated successfully!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

// Function to delete student
void deleteStudent(vector<Student>& students) {
    int rollNumber;
    cout << "Enter roll number to delete: ";
    cin >> rollNumber;
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->rollNumber == rollNumber) {
            students.erase(it);
            cout << "Student deleted successfully!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

int main() {
    vector<Student> students;
    int choice;
    while (true) {
        cout << "Student Details Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Check if input is valid
        if (cin.fail()) {
            cin.clear(); // clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid choice. Please enter a number between 1 and 6.\n";
            continue;
        }

        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                displayStudents(students);
                break;
            case 3:
                searchStudent(students);
                break;
            case 4:
                updateStudent(students);
                break;
            case 5:
                deleteStudent(students);
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}
