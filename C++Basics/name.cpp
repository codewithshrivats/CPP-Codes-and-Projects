#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "What's your name: ";
    //cin >> name; This will only read the first word of the name
    getline(cin, name);
    cout << "Hello Mr/Mrs " << name;

    return 0;
}