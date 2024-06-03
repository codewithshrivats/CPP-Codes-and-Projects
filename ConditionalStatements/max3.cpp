#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter 3 numbers: " << endl;
    cin >> a >> b >> c;

    if(a>b && a>c)
    {
        cout << "A is greater." << endl;
    }
    else if(b>c)
    {
        cout << "B is greater." << endl;
    }
    else{
        cout << "C is greater." << endl;
    }

    /*
    Also equivalent to - 
    if(a>b && a>b)
    {
        ...
    }
    else{
        if(b>c)
        {
            ...
        }
        else{
            ...
        }
    }
    */

    return 0;
}