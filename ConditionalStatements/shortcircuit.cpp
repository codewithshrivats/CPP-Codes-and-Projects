#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 7, c = 15, i = 5;

    /*
    Since the condition is false below in the first part of the condition (a>b) the second part wont be executed or checked. Thus i is never incremented and 5 is displayed. This is called short circuit.
    */
    if(a > b && ++i < b)
        cout << i << endl;  // This line wont execute since condition is false

    cout << i << endl;  // 5 is displayed here

    if(c > a && ++i < b)    // First part of condition is true so second part is also executed.
        cout << i << endl;  // Since condition true, 6 is displayed here

    return 0;
}