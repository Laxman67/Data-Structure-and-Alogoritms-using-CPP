#include <iostream>
using namespace std;
int main()
{

    int x, *p;

    x = 90, p = &x;
    cout << p << " " << *p << " "<<x;
}