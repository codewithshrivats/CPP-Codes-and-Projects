// WAP to calculate Net Salary
// Program should take following as input: Basic Salary, Percentage of Allowances, Percentage of Deductions

#include <iostream>
using namespace std;

int main()
{
    float net_salary, perc_allowance, perc_deduction, basic_sal;

    cout << "Please Enter the following:" << endl;
    cout << "Basic Salary: ";
    cin >> basic_sal;
    cout << "Percentage of Allowances: ";
    cin >> perc_allowance;
    cout << "Percentage of Deductions: ";
    cin >> perc_deduction;

    net_salary = basic_sal + basic_sal*perc_allowance - basic_sal*perc_deduction;

    cout << "Your Net Salary is: " << net_salary << endl;

    return 0;
}