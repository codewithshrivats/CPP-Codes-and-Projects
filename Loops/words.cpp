#include <iostream>
using namespace std;

int main()
{
    int n, temp, rem, rev1 = 0;

    cout << "Enter a number: ";
    cin >> n;

    while(n > 0)
    {
        rem = n%10;
        n = n/10;
        rev1 = rev1*10 + rem;
    }

    rem = 0;

    while(rev1 > 0)
    {
        rem = rev1%10;
        rev1 = rev1/10;
        
        switch(rem)
        {
            case 1: 
                cout << "One ";
                break;

            case 2: 
                cout << "Two ";
                break;

            case 3: 
                cout << "Three ";
                break;

            case 4: 
                cout << "Four ";
                break;

            case 5: 
                cout << "Five ";
                break;

            case 6: 
                cout << "Six ";
                break;

            case 7: 
                cout << "Seven ";
                break;

            case 8: 
                cout << "Eight ";
                break;

            case 9: 
                cout << "Nine ";
                break;
        }
    }

    return 0;
}