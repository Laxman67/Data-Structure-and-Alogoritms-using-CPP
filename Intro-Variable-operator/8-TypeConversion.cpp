#include <iostream>
using namespace std;
int main()
{

    // Conversion can lead to data loss /
    // float x = 10.5;
    // int y = x;  // y =10

    // bool z = y; // z=true

    int x = 15, y = 2;
    // double z = double(x) / y; // C-style Explicit Converion

    //  Or

    double z = static_cast<double>(x) / y; // C-style Explicit Converiosn
    //  double z = x / y;
    cout << z;
}