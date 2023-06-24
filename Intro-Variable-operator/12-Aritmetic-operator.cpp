#include <iostream>
using namespace std;
int main()
{

    // Note: The sign of a%b is same as sign of a --> first Opertor

    int x = -20, y = 10;

    cout << (x + y) << "\n"
         << (x = y) << "\n"
         << (x % y) << "\n"
         << (x * y);
    return 0;
}