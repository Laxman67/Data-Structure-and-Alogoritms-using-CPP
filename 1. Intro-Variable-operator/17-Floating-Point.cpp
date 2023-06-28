#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    // note   : strprecision(n)
    //   :   showpoint
    //  :   showpos

    cout << std::setprecision(4);

    double x = 15.5683, y = 34267.1;
    cout << x << " " << y << "\n ";

    // Show point
    double z = 1.23;
    cout << std::showpoint;
    cout << z
         << "\n";

    //  Showpos

    cout << std::showpos;
    cout << z << "\n";

    // Upper case

    cout << std::uppercase;
    cout << y << "\n";
}
