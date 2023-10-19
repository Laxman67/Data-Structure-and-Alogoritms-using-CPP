#include <iostream>
#include <math.h>
using namespace std;

int maxCuts(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n <= -1)
        return -1;

    int res = max(maxCuts(n - a, a, b, c),
                  max(maxCuts(n - b, a, b, c),
                      maxCuts(n - c, a, b, c)));

    if (res == -1)
        return -1;

    return (res + 1);
}
int main()
{

    int n = 23, a = 11, b = 9, c = 12;

    cout << maxCuts(n, a, b, c);

    return 0;
}