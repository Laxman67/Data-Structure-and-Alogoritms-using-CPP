#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    Point p;
    p.x = 90;
    p.y = 100;

    cout << p.x << " " << p.y;
}