#include <iostream>
using namespace std;

int fun(int &x)
{
    x = x + 10;
   
    return x;
}
int main()
{

    int x = 10;
    cout << fun(x);
    cout << " " << x;
}