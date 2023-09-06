#include <iostream>
using namespace std;
int insertElement(int arr[], int size, int element, int capacity, int position)

{
    if (capacity == size)

    {
        return size; // return  size
    }

    int index = position - 1; //

    for (int i = size - 1; i >= index; i--)
    {

        arr[i + 1] = arr[i];
        arr[index] = element;
    }
    return (size + 1); // return  updated ELement
}
int main()
{
    int capacity = 9;

    int arr[]{20, 24, 7, 89, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 3;
    cout << insertElement(arr, size, element, 9, 2);
}