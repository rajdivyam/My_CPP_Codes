#include<iostream>
using namespace std;
int main()
{
    int n, count ;
    cout << "Enter the Number:" ;
    cin >> n;
    count=0;

    while(n>0)
    {
        (n/=10);
        count++;
    }
    cout << "Total No. of Digits = " << count ;
    return 0;
}