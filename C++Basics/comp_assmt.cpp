#include <iostream>
using namespace std;

int main()
{
    int a=10, b=5, c=15;
    int sum=5;
    int prod = 1;

    //Below is same as - sum = sum + a
    sum += a;
    cout << sum << endl;
    
    //Another Example - sum = sum + a + b + c
    sum += a + b + c;
    cout << sum << endl;
    //Above can also be broken down into - sum += a; sum+= b; sum += c;

    prod *= a * b * c;
    cout << prod << endl;

    return 0;
}