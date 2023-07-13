#include <iostream>
using namespace std;
int main()
{

    string name[]{"Laxman", "Rohan", "Rajan", "Mohan"};

    for ( auto &&x : name)

    {

        cout << "Hi " << x << " " << endl;
    }
}