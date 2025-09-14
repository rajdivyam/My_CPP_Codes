#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the Number to which you have to find the sum:" ;
    cin >> a;
    b = a*(a+1) / 2;
    cout << "The Sum is:" << b ;
    return 0;
}