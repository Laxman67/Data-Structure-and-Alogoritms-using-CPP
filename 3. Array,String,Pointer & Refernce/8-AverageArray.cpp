#include <iostream>
using namespace std;
int averag_Array(int arr[], int n)
{

    int ans = 0;

    for (int i = 0; i < n; i++)

    {
        ans = ans + arr[i];
    }
    return ans / n;
}
int main()
{

    int arr[]{10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = averag_Array(arr, n);

    cout << sum;
}