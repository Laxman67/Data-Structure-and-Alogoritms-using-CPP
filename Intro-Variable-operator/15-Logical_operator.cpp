#include <iostream>
using namespace std;
int main()
{

    int x = 10, y = 20;

    // bool res = (x < 0 && x > 100);
    bool res = (x < 0 and x > 100);

    cout << res << "\n";

    // res = (x > 0 || x > y);
    res = (x > 0 or x > y);
    cout << res << "\n";

    res != res;
    // res not= res;
    cout << res << "\n";
}