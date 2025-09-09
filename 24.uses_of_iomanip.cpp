#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x = 15.5683 ;
    double y = 34267.1 ;
    cout << setprecision(4);
    cout << x << " \n" 
    << y << " " << "\n" ;
    double z = 1.23 ;
    cout << showpoint << z << "\n";  // SHOWPOINT SE ZERO AA JATA HAI LAST ME 
    cout << showpos << z << "\n";   // POSITIVE SIGN AATA HAI 
    cout << uppercase << y << "\n" ;  // CAPITAL LETTER ME PRINT HOKAR AATA HAI 
    return 0;
}