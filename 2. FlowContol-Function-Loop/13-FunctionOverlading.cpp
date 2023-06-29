#include <iostream>
using namespace std;
int mymax(int x, int y)
{
    return (x > y) ? x : y;
}
int mymax(int x, int y, int z)
{
    return mymax(mymax(x, y), z);
}

void print(string s)
{
    cout << s << "\n";
}
void print(int a)
{
    cout << a << "\n";
}
void print(char c)
{
    cout << c << "\n";
}
int main()
{
    int a = 10, b = 30, c = 50;
    cout << mymax(a, b) << "\n";
    cout << mymax(a, b, c) << "\n";

    print("Laxman");
    print('A');
    print(78);
    return 0;
}