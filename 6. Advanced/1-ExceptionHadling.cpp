#include <iostream>
using namespace std;
int main()
{

    int x, y;
    x = 90, y = 0;
    try
    {
        if (y == 0)
            throw 0;
        cout << "Result is " << x / y;
    }
    catch (int x)
    {
        cout << "Divisor is Zero";
    }
}