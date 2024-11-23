/* Write any two characteristics of static data member. Write
C++ program to count number of objects created with the
help of static data member.
--> 1.Shared Across All Instances
    2.Class-Level Scope
*/
#include <iostream>
using namespace std;
class Counter
{
private:
    static int count;

public:
    Counter()
    {
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
int Counter::count = 0;
int main()
{
    Counter obj1;
    Counter obj2;
    Counter obj3;
    cout << "Number of Counter objects created: " << Counter::getCount() << endl;

    return 0;
}
