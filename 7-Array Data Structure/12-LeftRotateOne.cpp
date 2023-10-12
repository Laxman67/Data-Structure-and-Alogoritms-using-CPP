#include <iostream>
using namespace std;

int leftRotateOne(int arr[], int size)

{
    int temp = arr[0];

    for (int i = 1; i < size; i++)
    {

        arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;
}

int main()
{
    int arr[]{30, 30, 40, 70, 70, 70, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << leftRotateOne(arr, size);

    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}