#include <iostream>
using namespace std;

bool FindXRecursion(int arr[], int l, int r, int x)
{

    if (r <= l)
        return false;
    if (arr[l] == x)
        return true;
    if (arr[r] == x)
        return true;

    FindXRecursion(arr, l + 1, r - 1, x);
}

int main()

{

    int arr[]{10, 89, 60, 57};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = arr[0];
    int r = arr[n - 1];

    cout << FindXRecursion(arr, l, r, 6);
}