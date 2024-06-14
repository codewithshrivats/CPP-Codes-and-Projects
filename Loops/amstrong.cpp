#include <iostream>
using namespace std;

int main()
{
    int num, temp, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while(num > 0)
    {
        rem = num%10;
        num = num/10;
        sum += rem*rem*rem;
    }

    if(sum == temp)
        cout << "Number is an amstrong number." << endl;
    else
        cout << "Number is not an amstrong number." << endl;

    return 0;
}