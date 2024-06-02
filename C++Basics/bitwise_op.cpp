#include <iostream>
using namespace std;

int main()
{
    int x, y, z, result;
    int choice;
    
    cout << "------Menu------" << endl;
    cout << "1. AND." << endl;
    cout << "2. OR." << endl;
    cout << "3. XOR." << endl;
    cout << "4. NOT." << endl;
    cout << "5. Left Shift (<<)" << endl;
    cout << "6. Right Shift (>>)" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice ;

    switch(choice)
    {
        case 1:
            cout << "Enter two numbers: " << endl;
            cin >> x >> y;
            result = x & y;
            cout << "The result after AND operation is: " << result << endl;
            break;

        case 2:
            cout << "Enter two numbers: " << endl;
            cin >> x >> y;
            result = x | y;
            cout << "The result after OR operation is: " << result << endl;
            break;
        
        case 3: 
            cout << "Enter two numbers: " << endl;
            cin >> x >> y;
            result = x ^ y;
            cout << "The result after XOR operation is: " << result << endl;
            break;

        case 4: 
            cout << "Enter a number: " << endl;
            cin >> x;
            result = ~x;
            cout << "The result after NOT operation is: " << result << endl;
            break;

        case 5: 
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Enter the value by which you want to shift the number: " << endl;
            cin >> z;
            result = x << z;
            cout << "The result after Left Shift operation is: " << result << endl;
            break;

        case 6: 
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Enter the value by which you want to shift the number: " << endl;
            cin >> z;
            result = x >> z;
            cout << "The result after Left Shift operation is: " << result << endl;
            break;

        default: 
            cout << "Wrong Option Entered." << endl;
            break;
    }

    return 0;
}