#include <iostream>
using namespace std;
int main()
{

    string str = "geeksforgeeks";
    int res = str.find("for");

    if (res == string::npos)
    {
        cout << "not Found";
    }
    else
    {
        cout << "string Found at " << res;
    }
}