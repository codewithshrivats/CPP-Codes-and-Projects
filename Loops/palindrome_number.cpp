#include <iostream>
using namespace std;

int main()
{
    int n, remainder, rev = 0, temp;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while(n > 0)
    {
        remainder = n%10;
        n = n/10;
        rev = rev*10 + remainder;
    }

    if(temp == rev)
        cout << "The number is a palindrome" << endl;
    else    
        cout << "The number is not a palindrome" << endl;

    return 0;
}