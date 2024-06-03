#include <iostream>
using namespace std;

int main()
{
    if(true)    // Program will only execute if code block
    {
        cout << "Hello" << endl;
    }
    else
    {
        cout << "Bye" << endl;
    }

    if(false)   // Program will only execute else code block
    {
        cout << "Hello" << endl;
    }
    else
    {
        cout << "Bye" << endl;
    }

    return 0;
}