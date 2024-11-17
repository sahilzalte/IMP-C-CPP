/* Write a program to declare a class Product.*/
#include <iostream>
using namespace std;

class Product
{
public:
    int productID;
    float price;
};

int main()
{
    Product p;
    Product *ptr = &p; // Pointer to object
    cout << "Enter product ID: ";
    cin >> ptr->productID;
    cout << "Enter price: ";
    cin >> ptr->price;

    cout << "Product ID: " << ptr->productID << ", Price: " << ptr->price << endl;
    return 0;
}
