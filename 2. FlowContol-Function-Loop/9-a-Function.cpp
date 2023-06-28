#include <iostream>
using namespace std;

int getmax(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a = 10, b = 20;
    cout << getmax(a,b);
}