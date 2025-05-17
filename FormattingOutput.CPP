#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double pi = 3.14159;
    cout << fixed << setprecision(2);
    cout << "Value of pi is:- " << pi << endl;
    cout << setw(10) << setfill('-') << 123 << endl;

    return 0;
}