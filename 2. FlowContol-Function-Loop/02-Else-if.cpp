#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number :\n";
    cin >> num;

    if (num < 0)
    {
        cout << "Number is Negative";
    }
    if (num > 0)
    {
        cout << "Number is Positive";
    }
    else
    {
        cout << "Number is Zero";
    }
}