#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &y = x;     // Here y is a nickname or alias for x. Y will not occupy any memory.

    x++;
    y++;

    cout << x << endl;
    cout << y << endl;

    return 0;   
}