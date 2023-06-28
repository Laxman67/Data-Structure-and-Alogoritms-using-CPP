#include <iostream>
using namespace std;
int main()
{

    /*

    Operators

    1. Addition
    2. Substarction
    3. Multipication


    */

    int num1, num2, Op;
    cout << "Enter Two Numbers and Operator  : ";
    cout << "Operator Table :\n"
         << "1. Addition\n "
         << "2. Substraction\n"
         << "3. Multiplication\n ";
    cout << endl;
    cin >> num1 >> num2 >> Op;

    switch (Op)
    {
    case 1:
        cout << num1 + num2;
        break;
    case 2:
        cout << num1 - num2;
        break;
    case 3:
        cout << num1 * num2;
        break;

    default:
        cout << "Invalid Opertor";
        break;
    }
}