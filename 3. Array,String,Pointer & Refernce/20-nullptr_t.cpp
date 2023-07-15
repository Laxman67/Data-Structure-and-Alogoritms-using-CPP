#include <iostream>
using namespace std;

void pointer(int *ptr)
{

    if (ptr == nullptr)
    {
        cout << "Pointer is NULL";
    }
}
int main()
{
    pointer(nullptr);
}