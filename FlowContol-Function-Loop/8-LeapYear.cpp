#include <iostream>
using namespace std;
int main()
{

    /*
    Leap Year Concept :
    Divisible by 4 but not by 100 ex:1952 , 1960

    Divisible by 400   ex:2400 , 2800


    */

    int year;
    cout << "Enter Year to Check its a leap or not : ";
    cin >> year;
    if (year % 4 == 0 and year % 100 != 0)
        cout << "Leap Year";

    else if (year % 400 == 0)
        cout << "Leap Year";
    else
        cout << "Not a Leap Year";
}