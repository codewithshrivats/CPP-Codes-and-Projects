#include <iostream>
using namespace std;

int main()
{
    int hour;

    cout << "Enter an Hour: " << endl;
    cin >> hour;

    if(hour >= 9 && hour <= 18) // This is a Compound Conditional Statement
    {
        cout << "Working Hour" << endl;
    }
    else{
        cout << "Leisurely Hour" << endl;
    }

    return 0;
}