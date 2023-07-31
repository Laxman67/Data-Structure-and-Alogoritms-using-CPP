#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[] = "gfg";
    char str2[] = "gfg";

    cout << str1 << endl;
    cout << strlen(str1) << endl;
    cout << strlen(str2) << endl;
    cout << strcmp(str2, str1) << endl;
    strcpy(str1, "Laxman");
    cout <<str1 << endl;


}