#include <iostream>
using namespace std;

class Item
{
public:
    string item_name;
    int code;
    float price;

    // Function to accept data
    void accept()
    {
        cout << "Enter item name: ";
        cin >> item_name;
        cout << "Enter item code: ";
        cin >> code;
        cout << "Enter item price: ";
        cin >> price;
    }

    // Function to display data
    void display() const
    {
        cout << "Item Name: " << item_name << endl;
        cout << "Item Code: " << code << endl;
        cout << "Item Price: $" << price << endl;
    }
};

int main()
{
    Item itemObj;         // Declare an object of class Item
    Item *ptr = &itemObj; // Pointer to the item object

    // Use pointer to access accept and display functions
    ptr->accept();
    cout << "\nDisplaying item information:\n";
    ptr->display();

    return 0;
}
