#include <iostream>
using namespace std;
int getLargestEle(int arr[], int size)
{
    int res = 0;
    for (int i = 1; i < size; i++)
    {

        if (arr[i] > arr[res])
            res = i;
    }
    return res;
}
int main()
{

    int arr[]{20, 7987, 56, 899};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << getLargestEle(arr, size);
}