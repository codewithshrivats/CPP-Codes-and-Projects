#include <iostream>
using namespace std;

int main()
{
    char c[50];
    cout << "Enter string: ";
    cin.getline(c, 50);

    cout << c << endl;

    char s[50];
    cout << "Enter another string: ";
    cin.getline(s, 50);

    cout << s << endl;

    return 0;   
}