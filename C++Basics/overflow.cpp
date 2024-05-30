#include <iostream>
using namespace std;

int main()
{
    
    char x = 127;
    cout << x << endl;
    cout << (int)x << endl;

    // Overflow is demonstrated in the next steps. 
    ++x;
    cout << x << endl;
    cout << (int)x << endl;

    return 0;
}