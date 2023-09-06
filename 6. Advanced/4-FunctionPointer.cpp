
#include <iostream>
using namespace std;
void fun()
{
    cout << "Hello C++";
}
void fun2(int x, int y)
{
    cout << "\nSum of a number is : " << x + y;
}
int main()

{
    void (*fun_ptr)() = fun;
    auto fun_ptr2 = fun2;
    fun();
    fun2(90, 10);
}