#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};
int main()
{

    Point p = {20, 40};
    Point *ptr = &p;
    ptr->y = ptr->y * 10;
    cout << ptr->y;
}