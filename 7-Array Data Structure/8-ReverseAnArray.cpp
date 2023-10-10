#include <iostream>
using namespace std;
int main()
{

    int arr[]{90, 56, 78, 40, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    // low and hight
    int low = 0, high = size - 1;

    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}