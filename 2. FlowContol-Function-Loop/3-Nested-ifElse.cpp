#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter any number :\n";
    cin >> num;

    if (num > 0)
    {
        cout << "Number is Positive\n";

        if (num % 2 == 0)
            cout << "Even ";
        else
            cout << "odd";
    }

    else if(num < 0)
    {
        cout << "Number is Negaitive\n";

        if (num % 2 == 0)
            cout << "Even ";
        else
            cout << "odd";

    }
    else{
        cout << "Number is Zero\n";

        
    }

    return 0;
}