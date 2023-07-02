#include <iostream>
using namespace std;
int main()
{
    // Ex; 10==>  1 2 3 4  6 7 8 9

    int n, x;

    cout << "Enter n: ";
    cin >> n;
    cout << "\nEnter x: ";
    cin >> x;

    for (int i = 1; i <= n; i++) // 1 -----n where n =10

    {
        if (i % x == 0)
            continue;

        cout << i << " ";
    }
}