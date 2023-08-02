#include <iostream>
using namespace std;
int main()
{

    string str = "geeksforgeeks";
    string newstr = "";

    for (int i = str.length() - 1; i >= 0; i--)

    {
        newstr += str[i];
    }

    cout << newstr;
    return 0;
}