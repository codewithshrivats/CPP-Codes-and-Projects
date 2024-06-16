#include <iostream>
using namespace std;

int main()
{
    int A[] = {4,8,6,7,9,5,2};

    int max, n=7;

    max = 0;

    for(int i=0; i<7; i++)
    {
        if(max<A[i])
        {
            max = A[i];
        }
    }

    cout << max << endl;

    return 0;
}