#include <iostream>
using namespace std;

// Base class Staff
class Staff {
public:
    int staffCode;
    string name;

public:
    void setDetails() {
        cout << "Enter name of staff: ";
        cin >> name;
        cout << "Enter Staff Code: ";
        cin >> staffCode;
    }

    void displayDetails() {
        cout << "Staff Name: " << name << endl;
        cout << "Staff Code: " << staffCode << endl;
    }
};

// Derived class Teacher
class Teacher : public Staff {
    string subject;

public:
    void setTeacherDetails() {
        cout << "Enter Subject Name: ";
        cin >> subject;
    }

    void displayTeacherDetails() {
        displayDetails();
        cout << "Subject: " << subject << endl;
    }
};

// Derived class Officer
class Officer : public Staff {
    char grade;

public:
    void setOfficerDetails() {
        cout << "Enter Grade of Officer: ";
        cin >> grade;
    }

    void displayOfficerDetails() {
        displayDetails();
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Teacher t;
    cout << "Enter Staff Information for Teacher:" << endl;
    t.setDetails();
    t.setTeacherDetails();

    Officer o;
    cout << "\nEnter Staff Information for Officer:" << endl;
    o.setDetails();
    o.setOfficerDetails();

    cout << "\nDisplaying Teacher Information:" << endl;
    t.displayTeacherDetails();

    cout << "\nDisplaying Officer Information:" << endl;
    o.displayOfficerDetails();

    return 0;
}
