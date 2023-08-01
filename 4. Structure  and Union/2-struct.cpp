#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    string address;
};

int main()
{
    Student S1 = {21, "Laxman", "Batala"};

    cout << S1.rollNo << " " << S1.name << " " << S1.address;
}