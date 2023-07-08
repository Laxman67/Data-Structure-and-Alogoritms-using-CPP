#include <iostream>
using namespace std;
int Sum_ofArray(int arr[], int n)
{

    int ans = 0;

    for (int i = 0; i < n; i++)

    {
        ans = ans + arr[i];
    }
    return ans;
}
int main()
{

    int arr[]{10, 10, 100, 10, 80, 10, 80, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = Sum_ofArray(arr, n);

    cout << sum;
}