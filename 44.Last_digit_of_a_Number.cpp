#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the number:" ;
    cin >> a ;
    b = abs(a % 10) ;

    cout << "Last digit of the given number is:" << b;
}