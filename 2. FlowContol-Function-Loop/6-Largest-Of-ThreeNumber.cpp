#include <iostream>
using namespace std;
int main()
{

    // ***********Largest Of three Number Problem*************
    /*

                   a=10      b=20    c=30  ---> 30


                   a=25     b=35    c=20  ---> 35

                   Concept:   a>b and a>c ; b>c and b>a ; C

    */
    // ***********Largest Of three Number Problem*************

    int a = 100, b = 20, c = 30;

    if (a > b and a > c)
        cout << "A is Greater";
    else if (b > a and b > c)
        cout << "B is Greater";
    else
        cout << "C is Greater";
}