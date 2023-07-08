#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
    int count = 0;
    bool isDistinct = true;

    for (int i = 0; i < n; i++)
    {
        isDistinct = true;

        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct == true)
            count++;
    }
    return count;
}

int main()
{
    int arr[]{10, 10, 100, 10, 80, 10, 80, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << countDistinct(arr, n);
}