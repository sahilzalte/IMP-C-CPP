/* Explain virtual functions with an example.*/
-->
Virtual Function: A member function in a base class that can be overridden in a derived class.
Example:
class Base {
public:
    virtual void show() { cout << "Base class." << endl; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived class." << endl; }
};

int main() {
    Base *ptr;
    Derived obj;
    ptr = &obj;
    ptr->show(); // Calls Derived's show
    return 0;
}