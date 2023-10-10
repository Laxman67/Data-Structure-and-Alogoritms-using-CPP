#include <iostream>
using namespace std;
int secondLargest(int arr[], int n)
{
    int res = -1, largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest; // res= 0
            largest = i;
        }

        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])

                res = i;
        }
    }
    return res;
}
int main()
{

    int arr[]{90, 56, 78, 40, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << secondLargest(arr, size);
}
