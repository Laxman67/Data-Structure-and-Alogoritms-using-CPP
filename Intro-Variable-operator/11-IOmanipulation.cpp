#include <iostream>
using namespace std;
int main()
{

    int a = true;
    int x = 26, y = 20;

    // boolalpha and noboolalpha

    cout << std::boolalpha;
    cout << a; // true
    cout << std::noboolalpha;
    cout << "\n"
         << a << "\n"; // 1

    // hex,oct,dec
    cout << std::showbase; // show that number is octla, hex or dec with their respective prefix

    cout << x << " " << y << "\n";
    cout << std::hex;
    cout << x << " " << y << "\n";
    cout << std::oct;
    cout << x << " " << y << "\n";
F
    cout << std::showpos;  // no
        cout << std::dec;
    cout << x << " " << y << "\n";
}