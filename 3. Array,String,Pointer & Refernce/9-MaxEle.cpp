#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        
    }

    return max;
}
int main()
{
    int arr[]{
        56, 78,709, 54, 100};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findMax(arr, n);
}