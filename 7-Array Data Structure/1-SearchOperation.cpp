#include <iostream>
using namespace std;

int searchElement(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[]{20, 24, 7, 89, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int element = 99;

    if (searchElement(arr, size, element) == -1)
    {
        cout << "Element is Not Present  that is --> " << element;
    }
    else
    {
        cout << "Element " << element << " is  Present  at  : " << searchElement(arr, size, element) << " Index";
    }
}