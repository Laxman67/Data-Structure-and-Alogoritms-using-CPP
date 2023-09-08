#include <iostream>
using namespace std;
int deleteELe(int arr[], int size, int element)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
            break; // and  up to  Index of element
    }

    // if i becomes is equal to size
    if (i == size)
    {
        return size;
    }

    for (int j = i; j < size - 1; i++)
    {
        arr[j] = arr[i + j]; // arr[1]= arr[1+1]
                             // arr[2] = arr[1+2]
                             // arr[3]=arr[1+3]
    }

    return (size - 1);
}

using namespace std;
int main()
{

    cout << "Main Function Called";
    int arr[]{21, 7, 90, 24, 19};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << deleteELe(arr, size, 90);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
