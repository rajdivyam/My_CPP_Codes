#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    a = 5;
    b = 3;
    cout << a << " " << b << "\n" ;
    temp = b;
    b = a ;
    a = temp;
    cout << a << " " << b ;

    return 0;
}