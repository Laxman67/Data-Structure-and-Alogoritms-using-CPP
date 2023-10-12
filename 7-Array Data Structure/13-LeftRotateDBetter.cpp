#include <iostream>
using namespace std;

void leftRotateD(int arr[], int n, int d)
{

    int temp[d];

    // copied first d element in temp
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i]; // 2-2 =0  |  3-2 = 1| 4-2=2
    }

    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
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