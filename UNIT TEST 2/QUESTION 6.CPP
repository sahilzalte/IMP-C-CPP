/* 6. Write a program on single inheritance.*/
#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "This is the parent class." << endl;
    }
};

class Child : public Parent {
};

int main() {
    Child obj;
    obj.display(); // Access parent method
    return 0;
}
