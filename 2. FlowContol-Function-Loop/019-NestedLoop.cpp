#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter number of table you want to print  :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= 10; j++)
        {
            // 2x2=4
            cout << i * j << " ";
        }
        cout << endl;

        /*
         for (int j = 1; j <= 10; j++)
        {
            // 2x2=4
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
        */
    }
}
