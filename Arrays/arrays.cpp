#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the size of the array: ";
    cin >> num;

    int A[num];

    for(int i=0; i<num; i++)
    {
        cout << "Enter " << i+1 << " element of the array: ";
        cin >> A[i];
    }

    for(int x:A)    // This is a for-each loop
        cout << x << " ";

    cout << endl;

    return 0;
}