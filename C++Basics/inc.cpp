#include <iostream>
using namespace std;

int main()
{
    int x = 5,y;
    int a = 5, b = 10, c;
    int a1 = 5, b1 = 10, c1;
    
    // In Post Increment the value is first assigned then incremented. 
    y = x++;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    // In Pre Increment the value is first incremented then assigned. 
    y = ++x;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    // a is first * with b then incremented and total value is assigned to c. 
    c = a++ * b;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    // a1 is first incremented then * with b1 and total value is assigned to c1.
    c1 = ++a1 * b1;
    cout << "a1: " << a1 << endl;
    cout << "b1: " << b1 << endl;
    cout << "c1: " << c1 << endl;

    // Same goes for post and pre decrement. 

    return 0;
}