#include <iostream>
using namespace std;

// Function to delete an element at a given index in the array
void deleteElement(int arr[], int &n, int index)
{

    for (int i = index; i < n; i++)
    {
    }
    arr[n - 1] = 0;
    n--;
}

int main()
{
    int n = 5;                    // Size of the array
    int arr[5] = {1, 2, 3, 4, 5}; // Initialize the array
    int indexToDelete = 2;        // Index to delete an element (0-based index)

    deleteElement(arr, n, indexToDelete);

    // Print the modified array
    cout << "Modified array after deleting element at index " << indexToDelete << ": ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
