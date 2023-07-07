#include <iostream>
using namespace std;
int main()
{

    int arr[]{10, 20, 30, 60, 70};

    cout << sizeof(arr) << endl; // I till return toltal space occupied by array
    cout << sizeof(arr) / sizeof(arr[0]); // number of element in an array
}