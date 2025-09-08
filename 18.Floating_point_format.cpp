#include<iostream>   // allows input/output (cin, cout, etc.)
using namespace std;

int main()
{
    double x = 1.2300;        // a double (floating point number)
    cout << x << '\n';        // prints 1.23 (extra zeros after decimal not shown)

    double y = 1567.56732;    // another double
    cout << y << '\n';        // prints 1567.57 (by default, up to ~6 digits precision)

    double z = 1244567.45;    
    cout << z << '\n';        // prints 1.24457e+06 (in scientific notation for big values)

    double w = 124456.67;     
    cout << w << '\n';        // prints 124457 (may round depending on precision)

    double u = 123e+2;        // scientific notation → 123 × 10² = 12300
    cout << u << '\n';        // prints 12300

    return 0;
}
