#include <iostream>
using namespace std;

int main()
{
    int num, i, key;

    cout << "Enter size of array: ";
    cin >> num;

    int A[num];

    cout << "Enter the elements of the array: ";
    for(i=0; i<num; i++)
    {
        cin >> A[i];
    }

    cout << "Enter key: ";   
    cin >> key;

    for(i=0; i<num; i++)
    {
        if(key == A[i])
        {
            cout << "Key is found at " << i << endl;
            return 0;
        }
    }

    cout << "Key was not found" << endl;

    return 0;
}