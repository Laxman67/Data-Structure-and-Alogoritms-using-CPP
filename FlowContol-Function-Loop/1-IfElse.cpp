#include <iostream>
using namespace std;
int main()
{

    /*
    if()
{

}else{

}
*/

    // Even Odd game

    int num;

    // Asking user input

    cout << "Enter any number :\n";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is Even";
    }

    else
    {
        cout << "Number is Odd";
    }
}