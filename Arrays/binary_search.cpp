#include <iostream>
using namespace std;

int main()
{
    int num, low, high, mid, key;

    int A[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    num = 10;
    low = 0;
    high = num - 1;

    cout << "Enter key: ";
    cin >> key;

    while(low <= high)
    {
        mid = (low+high)/2;

        if(key == A[mid])
        {
            cout << "Key found at " << mid << endl;
            return 0;
        }
        else if(key < A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "Key was not found" << endl;

    return 0;
}