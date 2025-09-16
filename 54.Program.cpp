#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter First Number:" ;
    cin >> a;

    cout << "Enter Second Number:" ;
    cin >> b;

    cout << "Enter Third Number:" ;
    cin >> c;

    if(a>= b and a>=c)
    {
        cout << "The largest Number is:" << a;
    }
    else if(b>=a and b >=c)
    {
        cout << "The largest Number is:" << b;
    }
    else 
    {
        cout << "The largest Number is:" << c;
    }
    return 0;
}