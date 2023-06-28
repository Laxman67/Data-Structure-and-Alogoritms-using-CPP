#include <iostream>
using namespace std;
int main()
{

    // Note: The sign of a%b is same as sign of a --> first Opertor
    //  In case of integer the result if a /b and a%b is undefined when b is 0
    //  % opertor works for integer types only

    //  BINARY OPERATOR

    int x = -20, y = 10, z = 90;

    cout << (x + y) << "\n"
         << (x = y) << "\n"
         << (x % y) << "\n"
         << (x * y);

    // UNARY OPERATOR

    // ***** Postfix ***********//
    // z++
    // z--

    cout << "\n " << z++;
    

    // ***** Prefix ***********//
    //  ++z
    // --z

    cout << "\n " << ++z;

    return 0;
}