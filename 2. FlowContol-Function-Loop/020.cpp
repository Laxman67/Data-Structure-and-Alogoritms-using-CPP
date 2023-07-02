#include <iostream>
using namespace std;
int main()
{

    int n = 100;

    for (int x = 2; x <= n; x++)
    {
        if (n % x == 0)
        {
            cout << "Smallest diviser is :" << x << endl;
            break;
        }
    }
}