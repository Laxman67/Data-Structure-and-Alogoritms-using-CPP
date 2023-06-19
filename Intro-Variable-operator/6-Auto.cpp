#include <typeinfo>
#include <iostream>

using namespace std;

int main()
{

    auto a = 10;
    auto b = 15.5;
    cout << a << "\n"
         << b << "\n";
    cout << typeid(a).name() << "\n"
         << typeid(b).name();

    return 0;
}
