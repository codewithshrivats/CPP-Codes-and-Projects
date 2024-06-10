#include <iostream>
using namespace std;

int main()
{
    int n, result = 1;

    cout << "Enter a number: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        result *= i;
    }

    cout << "The result is: " << result << endl;

    return 0;
}