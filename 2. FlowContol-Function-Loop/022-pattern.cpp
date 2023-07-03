#include <iostream>
using namespace std;
int main()
{

    /*
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4
    */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 3 and j == 2)
                cout << "O ";
            else
                cout << i << " "; // Horizontal Lines
        }
        cout << endl;
    }
}