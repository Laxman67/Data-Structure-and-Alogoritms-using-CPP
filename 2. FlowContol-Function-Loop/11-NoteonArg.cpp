#include <iostream>
using namespace std;

/*Default Argumnet value can be provided either in decalaration or in definition */

// Function Declaration
int sum(int a, int b, int c = 0, int d = 0);

    int main()
{
    cout << sum(10, 20, 30) << "\n";
    cout << sum(10, 7) << "\n";
}

// Function Definition
int sum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}