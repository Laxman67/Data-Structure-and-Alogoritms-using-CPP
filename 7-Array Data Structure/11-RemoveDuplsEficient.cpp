#include <iostream>
using namespace std;

int removeDuplicateEffi(int arr[], int size)

{

    int res = 1; // res=1 because temp have only one element

    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[res - 1])
        {

            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[]{30, 30, 40, 70, 70, 70, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << removeDuplicateEffi(arr, size);
}