#include <iostream>
using namespace std;
class Product
{
private:
    int product_id;
    float price;

public:
    // Member function to accept data
    void acceptData()
    {
        cout << "Enter Product ID: ";
        cin >> product_id;
        cout << "Enter Price: ";
        cin >> price;
    }

    // Member function to display data
    void displayData()
    {
        cout << "Product ID: " << product_id << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Product *ptr = new Product;
    ptr->acceptData();
    ptr->displayData();
    delete ptr; // Deallocate memory
    return 0;
}
