#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x = 1.23;
    double y = 1122456.453;
    cout << x << "\n";
    cout << y << "\n";
    cout << fixed ;
    cout << setprecision(2);
    cout << x << "\n";
    cout << y << "\n";
    double z = 1.2e+7;
    cout << z;

    return 0;
}