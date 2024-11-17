/* Explain the concept of a virtual base class with a suitable example.*/
-->
Virtual base class: Prevents multiple copies of a base class in an inheritance hierarchy.
Example:
class A {
public:
    int data;
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {}; // Only one copy of A exists