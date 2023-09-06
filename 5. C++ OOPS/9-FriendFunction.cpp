#include <iostream>
using namespace std;

class Printer
{

public:
    void printEmp(const Employee &e);
};

class Employee
{
public:
    int id;
    string name;
    // Friend Funcion
    friend void Printer::printEmp(const Employee &e);

    Employee(int i, string n) : id(i), name(n)
    {
    }
};

void Printer::printEmp(const Employee &e)
{
    cout << e.id << " " << e.name;
}

int main()
{
    Printer p;
    Employee e(101, "abc");
    p.printEmp(e);
}