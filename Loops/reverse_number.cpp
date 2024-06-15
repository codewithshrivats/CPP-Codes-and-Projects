#include <iostream>
using namespace std;

int main()
{
    int num, remainder, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0)
    {
        remainder = num%10;
        num = num/10;
        reverse = reverse*10 + remainder;
    }

    cout << reverse << endl;

    return 0;
}