#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a = 12345.6789;
    cout << a << endl ;     // Default: 12345.7
    cout << scientific << a << endl ;  // Scientific: 1.234568e+04
    cout << scientific << setprecision(3) << a << endl ;  // Scientific with 3 digits: 1.235e+04
    return 0;
}