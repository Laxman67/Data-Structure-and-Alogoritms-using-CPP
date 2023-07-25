#include <iostream>
using namespace std;
int main()
{

    int arr[]{10, 20, 30, 60, 90};
    int *ptr = arr;
    int *ptr2 = ptr+5;
    ptr2 = ptr + 5;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr--;
    cout << *ptr << endl;
    ptr = ptr + 2;
    cout << *ptr << endl;
    // This will return number of object btw them
    cout << (ptr2 - ptr);
}