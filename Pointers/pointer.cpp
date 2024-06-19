#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p;     // Declaration of pointer 

    p = &x;     // Initialisation of Pointer

    cout << x << endl;      // Value 10
    cout << &x << endl;     // Address of X
    cout << p << endl;      // Address of X
    cout << &p << endl;     // Address of P
    cout << *p << endl;     // Dereferencing of Pointer (Data at X)

    return 0;
}