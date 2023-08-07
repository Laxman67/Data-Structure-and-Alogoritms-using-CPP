#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    Base(int a) : x(a)
    {
        cout << "Base";
    }
};

class Derived : public Base

{
private:
    int y;

public:
    Derived(int a, int b) : Base(a), y(b)
    {
        cout << "Derived";
    }
    void Print()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Derived d(10,70);
    d.Print();
}