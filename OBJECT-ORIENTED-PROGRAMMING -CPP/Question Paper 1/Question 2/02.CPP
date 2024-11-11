// Q. Describe memory allocation for objects
/*
    objects created as local variables are allocated on the stack,
    and their memory is released automatically when they go out of scope.
    Objects created with new are allocated on the heap and require manual deallocation using delete. 
    Stack allocation is faster and automatically managed,
    while heap allocation offers more flexibility but needs careful memory management.
*/
#include <iostream>
using namespace std;

class Sample
{
public:
    int data;
};

int main()
{
    Sample *obj = new Sample; // Heap allocation
    obj->data = 20;
    cout << "Data: " << obj->data << endl;
    delete obj; // Freeing heap memory
    return 0;
}
