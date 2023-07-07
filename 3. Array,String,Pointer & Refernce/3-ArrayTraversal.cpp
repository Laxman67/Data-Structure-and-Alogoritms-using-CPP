#include <iostream>
using namespace std;
int main()
{

    // for loop based array traversal

    int arr[]{10, 30, 20, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // ranged based array traversal
    int arr1[]{100, 78, 9, 56, 65};

    for (int x : arr1)
    {

        cout << x << " ";
    }

    return 0;
}