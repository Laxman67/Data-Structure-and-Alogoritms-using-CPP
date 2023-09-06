#include <iostream>
using namespace std;
int fun()
{

    int *ptr = new int;
    // return *ptr;
    delete ptr;
}
int main()

{

    cout << fun();
    // To delete memory
}