#include <iostream>
using namespace std;
int main()
{

    int arr[]{10, 20, 30, 40};
    // Modifying
    for (auto &x : arr)
    {
        x = x * 2;
    }

    // Accessing
    for (auto x : arr)
    {

        cout << x << " ";
    }
}