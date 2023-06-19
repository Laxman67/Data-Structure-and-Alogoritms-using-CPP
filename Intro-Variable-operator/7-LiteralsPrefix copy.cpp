#include <iostream>
using namespace std;
int main()
{

    // Using Prefixes
    // 0x->  Hexadecimal
    // 0->  Octal
    // 0b-> Binary

    int a = 20; // Treated as Integer
    int b = 0x1A;
    int c = 016;
    int d = 0b111;
    cout << a << "\n"
         << b << "\n"
         << c << "\n"
         << d;
    return 0;
}