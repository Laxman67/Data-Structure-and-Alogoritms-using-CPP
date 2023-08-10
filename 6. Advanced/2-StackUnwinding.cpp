#include <iostream>
using namespace std;

void f1()
{
    cout << "F1 Begins \n";

    throw 100;
    cout << "F1 Ends \n";
}

void f2()
{
    cout << "F2 Begins \n";

    f1();
    cout << "F2 Ends \n";
}

int main()
{

    try
    {
        f2();
    }

    catch (int x)
    {
        cout << "Caught Exception\n";
    }

    cout << "Bye";
}