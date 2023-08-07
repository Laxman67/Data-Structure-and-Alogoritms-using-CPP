#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base\n";
    }
};

class Derived : public Base
{
public:
    void print() override
    {
        cout << "Derived\n";
    }
};

int main()
{
    Derived d;
    Base b;
    Base *ptr = &d;

    b.print();
    d.print();
    ptr->print();
    return 0;
}