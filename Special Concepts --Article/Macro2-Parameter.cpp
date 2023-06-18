#include <iostream>
using namespace std;
#define AREA(l, b) (l * b)
int main()
{

    int area, x = 10, y = 20;
    area = AREA(x, y);
    cout << "Area is -->" << area;
}