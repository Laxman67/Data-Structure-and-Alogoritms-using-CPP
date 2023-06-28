#include <iostream>
using namespace std;

void fun()
{
    cout << "Fun() called\n";
}

int main()
{
    cout << "Before fun()\n";
    fun();
    fun();

    cout << "After fun()\n";
}