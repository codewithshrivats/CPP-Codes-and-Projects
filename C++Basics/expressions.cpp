#include <iostream>
#include <cmath>
using namespace std;

int area_triangle(int a, int b)
{
    return (a*b)/2;
}

int perimeter_rectangle(int a, int b)
{
    return 2*(a+b);
}

int sum_n_terms(int a)
{
    return (a*(a+1))/2;
}

int ap_series(int a, int b, int c)
{
    return a+(b-1)*c;
}

int quadratic(int a, int b, int c)
{
    return (-b + sqrt(b*b - 4*c*a))/(2*a);
}

int speed (int v, int u, int a)
{
    return (v*v-u*u)/(2*a);
}

int main()
{
    int choice, result;
    
    cout << "--------Menu--------" << endl;
    cout << "1. Area of a Triangle." << endl;
    cout << "2. Perimeter of a Rectangle." << endl;
    cout << "3. Sum of N terms." << endl;
    cout << "4. N terms of AP series." << endl;
    cout << "5. Roots of Quadratic Equation." << endl;
    cout << "6. Speed of a vehicle." << endl;
    cout << "7. Quit" << endl;
    
   while(true)
   {
    cout << "Please Enter your choice: ";
    cin >> choice;

    if( choice >= 1 && choice <= 7)
    {
        break;
    }

    cout << "Wrong option entered. Please Enter again: ";
   }

   switch(choice)
   {
    case 1: 
        int base, height;
        cout << "Enter Base: " << endl;
        cin >> base;
        cout << "Enter Height: " << endl;
        cin >> height;
        result = area_triangle(base, height);
        cout << "The Area is: " << result << endl;
        break;

    case 2: 
        int length, breadth;
        cout << "Enter Lenght: " << endl;
        cin >> length;
        cout << "Enter Breadth: " << endl;
        cin >> breadth;
        result = perimeter_rectangle(length, breadth);
        cout << "The Perimeter of Rectangle is: " << result << endl;
        break;

    case 3: 
        int n;
        cout << "Enter Nth Term: " << endl;
        cin >> n;
        result = sum_n_terms(n);
        cout << "The Sum of first N terms is: " << result << endl;
        break;

    case 4: 
        int a, n1, d;
        cout << "Enter First Term: " << endl;
        cin >> a;
        cout << "Enter Last Term: " << endl;
        cin >> n1;
        cout << "Enter difference between first and second terms: " << endl;
        cin >> d;
        result = ap_series(a, n1, d);
        cout << "The nth term of AP series is: " << result << endl;
        break;

    case 5:
        int a1, b, c;
        cout << "Enter A: " << endl;
        cin >> a1;
        cout << "Enter B: " << endl;
        cin >> b;
        cout << "Enter C: " << endl;
        cin >> c;
        result = quadratic(a1, b, c);
        cout << "The root is: " << result << endl;
        break;

    case 6: 
        int v, u, a2;
        cout << "Enter Initial Speed of Vehicle: " << endl;
        cin >> u;
        cout << "Enter Final Speed of Vehicle: " << endl;
        cin >> v;
        cout << "Enter Acceleration: " << endl;
        cin >> a2;
        result = speed(v, u, a2);
        cout << "The Speed of the Vehicle is: " << result << endl;
        break;

    case 7: 
        cout << "Quitting..." << endl;
        break;
   }

   return 0;
}