#include <iostream>
using namespace std;
int main()
{

    int arr[]{10, 30, 20, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 2;    // arr[0]= 10*2 ; arr[1]= 30*2
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}