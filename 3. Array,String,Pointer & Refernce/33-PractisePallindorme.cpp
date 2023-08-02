#include <iostream>
using namespace std;
int main()
{

    string str = "raman";

    int start = 0;
    int end = str.length() - 1;

    while (start < end)

    {

        if (str[start] != str[end])
        {
            cout << "No";
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