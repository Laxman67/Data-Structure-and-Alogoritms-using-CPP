#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout << "\nConstructor called\n";
    }
    ~Test()
    {
        cout << "\nDestructor called\n";
    }
};

int main()
{
    {
        Test t1;
    }

    Test t2;
}