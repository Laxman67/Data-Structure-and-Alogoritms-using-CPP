#include <iostream>
using namespace std;

int SortedORnot(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {

        if (arr[i] < arr[i - 1]) // arr[]{10, 20, 40, 50};  -=> 20 <10
            return false;
    }
    return true;
}

int main()
{

    int arr[]{10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (SortedORnot(arr, n) == true)
        cout << "Sorted";
    else
        cout << "Not Sorted";
}