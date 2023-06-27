#include <iostream>
using namespace std;
int main()
{

    // Note: First Cup is Picked by you

    // 1 2 3 4 5 6  == Opponent Win
    // 1 2 3 4 5  == You Win

    int a;
    cout << "Enter any number: ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "Opponent Win";
    }
    else
    {
        cout << "You  Win";
    }
}
