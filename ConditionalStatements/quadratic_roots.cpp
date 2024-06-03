#include <iostream>
using namespace std;

typedef int coef;
typedef int roots;

int main()
{
    int discriminant;
    coef a, b, c;
    roots r1, r2;

    cout << "Enter A, B, C: " << endl;
    cin >> a >> b >> c;

    discriminant = (b*b)-(4*a*c);

    if(discriminant > 0)
    {
        cout << "Roots are real and unequal." << endl;
    }
    else if(discriminant = 0)
    { 
        cout << "Roots are real and equal." << endl;
    }
    else
    {
        cout << "Roots are imaginary." << endl;
    }
    
    return 0;
}