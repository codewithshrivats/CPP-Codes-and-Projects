#include <iostream>
using namespace std;

const int CS = 1;
const int ECE = 2;
const int IT = 3;

enum days {mon = 1, tue, wed, thur, fri, sat, sun};

int main()
{
    days d;
    int dept;

    // Constant Int
    dept = CS;
    cout << "Department CS: " << dept << endl;
    cout << "Department ECE: " << ECE << endl;

    // Enum
    d = mon;
    cout << "Day (Monday): " << d << endl;
    cout << "Day (Tuesday): " << tue << endl;

    // Constant integers and Enum are both different but achieve similar purposes. 
    // We have to assign values in Constant Int but they are automatically assigned in Enum (from 0-n)

    return 0;
}