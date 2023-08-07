#include <iostream>
using namespace std;
class Player
{
public:
    static int count;

    Player()
    {
        count++;
    }

    ~Player()
    {
        count--;
    }
};

int Player::count = 0;
// datatype classname  :: variable name = value  ---> static Data Member

int main()
{
    Player p1;
    cout << "Player :" << Player::count << endl;
    {
        Player p2;
        cout << "Player :" << p2.count << endl;
    }
    cout << "Player :" << Player::count << endl;

}