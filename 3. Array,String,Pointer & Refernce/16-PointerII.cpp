#include <iostream>
using namespace std;
int main()
{

    int x = 10;
    int *ptr = &x;
    cout << *ptr << endl;
    x = x + 30;
    cout << *ptr << endl;
    *ptr = *ptr + 40;
    cout << *ptr << endl;
}