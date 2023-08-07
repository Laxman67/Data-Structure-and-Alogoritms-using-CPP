#include <iostream>
using namespace std;
class Player
{
private:
    static int count;

public:
    Player()
    {
        count++;
    }

    ~Player()
    {
        count--;
    }

    static int getCount()
    {
        return count;
    }
};

int Player::count = 0;
// datatype classname  :: variable name = value  ---> static Data Member

int main()
{
    Player p1, p2, p3;
    cout << Player::getCount(); // 3
}