#include <iostream>
using namespace std;

void fun(int *x)
{
    *x = *x + 10;
}
int main()
{
    int a = 90;

    fun(&a);
    cout << a;
}