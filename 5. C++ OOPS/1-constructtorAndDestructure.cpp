#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    void print()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Point p1, p2(10, 20);
    p1.print();
    p2.print();

    Point *ptr = new Point(100, 900);
    ptr->print();
}