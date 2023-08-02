#include <iostream>
using namespace std;
int main()
{
    string str = "geeksforgeeks";
    cout << str << endl;
    cout << str.length() << endl; // Lengt

    // String Addition

    str += " Laxman";
    cout << str << endl;
    cout << str.length(); // Length

    // String Find

    if (str.find("ax") == true)
    {
        cout << "Found";
    }
    else
    {
        cout << endl
             << "Not Found";
    }

    string str1 = str.substr(2, 10);
    cout << endl
         << str1;
}