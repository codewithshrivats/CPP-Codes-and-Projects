#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    while(!(i == 0))    // This condition wont execute even once since i = 0
    {
        i++;
        cout << i << endl;
    }

    do  // This condition will execute exactly once before checking the condition
    {
        i++;
        cout << i << endl;
    }while (i == 0);
    

    return 0;
}