#include <iostream>
using namespace std;
int main()
{

    int arr[]{30, 10, 50};
    int *ptr = arr;
    cout << sizeof(arr) << endl;
    cout << sizeof(ptr) << endl;
    cout << *(ptr++) << endl;
    cout << *(ptr)<<endl;
    cout<<arr[2];
}