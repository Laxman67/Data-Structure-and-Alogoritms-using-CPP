#include <iostream>
using namespace std;
int main()
{

    // Using Prefixes
    // u->  unsigned
    // l->  long
    // ul-> unsigned long

    int a = 12u;
    unsigned int b = 124u;
    int long c = 124l;
    long long d = 124ll;
    cout << a << "\n"
         << b << "\n"
         << c << "\n"
         << d << "\n";

    return 0;
}