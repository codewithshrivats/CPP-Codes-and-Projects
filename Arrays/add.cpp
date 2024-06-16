#include <iostream>
using namespace std;

int main()
{
    int A[] = {1,2,3};
    int sum=0;

    for(int i=0; i<3; i++)
    {
        sum += A[i];
    }

    cout << sum << endl;

    return 0;
}