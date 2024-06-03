#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter two numbers: " << endl;
    cin >> x >> y;

    if(x > y)   // Condition to check greater of two numbers. 
    {
        cout << "X is Greater." << endl;
    }
    else{
        cout << "Y is Greater." << endl;
    }

    return 0;
}