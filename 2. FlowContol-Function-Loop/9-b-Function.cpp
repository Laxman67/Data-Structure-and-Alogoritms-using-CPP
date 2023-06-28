#include <iostream>
using namespace std;

void greetMsg()
{
    cout << "Hi \n";
    cout << "Welcome to Geeks For Geeks\n";
    cout << "************************\n";
}

void exitMsg()
{
    cout << "************************\n";
    cout << "Bye \n";

    cout << "Visit Again\n";
}
int main()

{
    greetMsg();
    cout << "Hope you're doing Well\n";
    exitMsg();
}