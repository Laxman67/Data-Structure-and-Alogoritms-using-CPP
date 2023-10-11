#include <iostream>
using namespace std;

int removeDuplicate(int arr[], int size)

{
    int temp[size];
    temp[0] = arr[0]; // assign element at index 0
    int res = 1;      // res=1 because temp have only one element

    for (int i = 0; i < size; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }

    for (size_t i = 0; i < res; i++)
        arr[i] = temp[i];
}

int main()
{

    int arr[]{30, 30, 40, 60, 70, 70, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << removeDuplicate(arr, size);
}