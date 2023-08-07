#include <iostream>
using namespace std;
struct Student
{
    int rollNo;
    float man;
} __attribute__((packed));

int main()
{

    Student s;
    cout << sizeof(Student);
}