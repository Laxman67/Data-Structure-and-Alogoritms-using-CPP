#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

void print(Point p)
{
    cout << p.x << " " << p.y;
}

int main()
{
    Point p = {100, 90};

    print(p);
}