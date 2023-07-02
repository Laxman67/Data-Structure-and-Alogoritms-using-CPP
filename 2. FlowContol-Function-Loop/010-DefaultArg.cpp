#include <iostream>
using namespace std;

void printDetails(int id, string name = "NA", string address = "Na")
{

    cout << "id is :" << id << "\n";
    cout << "Name  is :" << name << "\n";
    cout << "Address is :" << address << "\n";
    cout << endl;
}
int main()
{
    printDetails(12, "Laxman");
    printDetails(4, "Sandeep", "Batala ");
    printDetails(12);
}