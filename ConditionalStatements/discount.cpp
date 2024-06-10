#include <iostream>
using namespace std;

int main()
{
    int total_bill_amount, discount, discounted_amount;
    
    cout << "Enter the total bill amount: ";
    cin >> total_bill_amount;

    if(total_bill_amount < 100)
    {
        cout << "Sorry! No discount" << endl;
    }
    else if(total_bill_amount >= 100 && total_bill_amount < 500)
    {
        discounted_amount = total_bill_amount - total_bill_amount*10/100;
        discount = total_bill_amount*10/100;
        cout << "The discounted amount is: " << discounted_amount << endl;
        cout << "The discount is: " << discount << endl;
    }
    else
    {
        discounted_amount = total_bill_amount - total_bill_amount*20/100;
        discount = total_bill_amount*20/100;
        cout << "The discounted amount is: " << discounted_amount << endl;
        cout << "The discount is: " << discount << endl;
    }

    return 0;
}