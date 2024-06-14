#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0, n;

    cout << "Enter a number: ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            sum += i;
        }
    }

    if(sum == 2*n)
    {
        cout << "Number is a perfect number" << endl;
    }
    else{
        cout << "Number is not a perfect number" << endl;
    }

    return 0;
}