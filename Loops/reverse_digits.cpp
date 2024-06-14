#include <iostream>
using namespace std;

int main()
{
    int num, remainder;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0)
    {
        remainder = num%10;
        num = num/10;
        cout << remainder << " ";
    }

    return 0;
}