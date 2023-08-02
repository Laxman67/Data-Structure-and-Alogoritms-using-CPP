#include <iostream>
using namespace std;

int binary_to_decimal(string str)
{
    int size = str.length();
    int base = 2, ans = 0;

    for (int i = size - 1; i >= 0; i--)

    {

        ans = ans + ((int)(str[i] - '0') * base);
        base = base * 2;
    }
    cout << ans;
}

int main()
{

    string str = "10011";

    binary_to_decimal(str);
}