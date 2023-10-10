#include <iostream>
using namespace std;

int getLargest(int arr[], int size)
{
    int largest = 0;
    for (size_t i = 0; i < size; i++)
    {

        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }

    return largest;
}

int secondLargest(int arr[], int size)
{
    int res = -1;
    int largest = getLargest(arr, size); // getting first element

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[largest])
        {
            if (res == -1)
                res = i;

            if (arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}
int main()

{

    int arr[]{10, 900, 1100, 908};

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << secondLargest(arr, size);
}