#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a = 12345.6789;
    cout << a << "\n";                   //  12345.7
    cout << fixed << a << "\n";           // 12345.678900
    cout << fixed << setprecision(2) << a << "\n" ;    //  12345.68 
    return 0;
}