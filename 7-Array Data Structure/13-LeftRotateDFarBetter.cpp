#include <bits/stdc++.h>
// #include <stdio.h>
using namespace std;
void reverse(int arr[], int low, int high)
{

    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void leftRotateD(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
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