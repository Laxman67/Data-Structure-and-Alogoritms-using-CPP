#include <iostream>
using namespace std;
class ArraySizeZeroException
{
};
class ArraySizeNegativeException
{
};

int average(int arr[], int n)
{
    if (n == 0)
        throw ArraySizeZeroException();
    if (n < 0)
        throw ArraySizeNegativeException();

    int sum = 0;

    for (int i = 0; i < n; i++)

        sum += arr[i];

    return sum / n;
}

int main()
{

    int n;
    n = -9;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    try
    {
        int res = average(arr, n);
        cout << res;
    }
    catch (ArraySizeZeroException &e1)
    {
        cout << "Array is Zero";
    }
    catch (ArraySizeNegativeException &e2)
    {
        cout << "Array is Negative";
    }
}