#include <iostream>
using namespace std;
int main()
{

    string name;
    cout << "Enter your name :";
    // cin >> name;
    getline(cin, name);
    cout << "Your name is " << name;
}