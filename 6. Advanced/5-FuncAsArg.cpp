#include <iostream>
using namespace std;
int add(int x, int y) { return (x + y); }
int multiply(int x, int y) { return (x * y); }
int compute(int x, int y, int (*ptr)(int, int))
{
    return ptr(x, y);
}



int main()
{
    cout << compute(90, 10, add) << endl;
    cout << compute(90, 10, multiply);
}