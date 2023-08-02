#include <iostream>
using namespace std;
int main()
{

    string str = "ccacc";
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {

        if (str[start] != str[end])
        {
            cout << "no";
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }

    cout << "Yes";
}