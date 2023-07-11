#include <iostream>
using namespace std;
int main()
{

    int x = 10;
    cout << "Address of X :" << &x << endl;
    cout << "Value at  address - " << &x << " is :" << *(&x) << endl;
}