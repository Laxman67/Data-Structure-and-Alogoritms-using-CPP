#include <iostream>
using namespace std;
int main()
{

    // Note: The sign of a%b is same as sign of a --> first Opertor
    //  In case of integer the result if a /b and a%b is undefined when b is 0
    //  % opertor works for integer types only 

    int x = -20, y = 10;

    cout << (x + y) << "\n"
         << (x = y) << "\n"
         << (x % y) << "\n"
         << (x * y);
    return 0;
}