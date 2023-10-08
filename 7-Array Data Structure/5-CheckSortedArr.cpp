#include <iostream>
using namespace std;

int checkSorted(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return -1;
    }

    return 1;
}
int main()
{

    int arr[]{10, 90, 200, 911};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << checkSorted(arr, size);
}