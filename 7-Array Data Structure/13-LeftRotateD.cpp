#include <iostream>
using namespace std;

void leftRotateOne(int arr[], int n)
{

    int temp = arr[0];

    for (size_t i = 1; i < n; i++)
        arr[i - 1] = arr[i];

    arr[n - 1] = temp;
}


void leftRotateD(int arr[], int n, int d)
{

    for (size_t i = 1; i <= d; i++)
        leftRotateOne(arr, n);
}

int main()
{
    int d = 3;
    int arr[]{30, 30, 40, 70, 70, 70, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before" << endl;

    for (size_t i = 0; i < size; i++)
        cout << arr[i] << " ";

    // function call
    leftRotateD(arr, size, d);

    cout << "After" << endl;

    for (size_t i = 0; i < size; i++)
        cout << arr[i] << " ";
}