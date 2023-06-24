#include <iostream>
using namespace std;
int main()
{

    int x = 10, y = 20;

    cout << std::boolalpha; // It will Change boolean Value to Alphanumeric

    cout << (x < y) << "\n";
    cout << (x > y) << "\n";
    cout << (x <= y) << "\n";
    cout << (x >= y) << "\n";
    cout << (x == y) << "\n"; // It will check that both variable have same vaule or not?
    cout << (x != y) << "\n";
    return 0;
}