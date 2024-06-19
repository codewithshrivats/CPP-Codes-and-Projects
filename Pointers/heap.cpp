#include <iostream>
using namespace std;

int main()
{
    int *p;     // Declaration of Pointer P
    int num;

    cout << "Enter size of heap array: ";
    cin >> num;

    p = new int[num];   // Heap memory allocation using Pointer P

    for(int i=0; i<num; i++)
    {
        cout << "Enter " << i+1 << " element of array: ";
        cin >> p[i]; 
    }

    for(int i=0; i<num; i++)
    {
        cout << i+1 << " element is: " << p[i] << endl;
    }

    delete []p;     // Deletion of Heap Memory (Array)
    p = NULL;       // P is pointing to NULL

    if(p == NULL)
        cout << "Heap array succesfully deleted" << endl;
    else    
        cout << "Unsuccessful deletion" << endl;

    return 0;
}