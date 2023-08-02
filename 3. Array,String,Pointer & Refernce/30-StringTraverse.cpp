#include <iostream>
using namespace std;
int main()
{

    string str = "gfg";
    cout << "Using For Loop\n";
    for (int i = 0; i < str.length(); i++)
    {

        cout << str[i];
    }

    cout << "\nUsing Foreach Loop\n";
    for (auto x : str)
    {
        cout << x;
    }

    cout << "\nUsing STL Libraries\n";
    for (auto i = str.begin(); i < str.end(); i++)
    {
        cout << *i;
    }
}