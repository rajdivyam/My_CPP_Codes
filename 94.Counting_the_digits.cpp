#include<iostream>
using namespace std;
int main()
{
    int n, count ;
    cout << "Enter the Number:" ;
    cin >> n;
    count=0;

    if(n<0)
    {
        n = -n;
    }
    if(n==0)
    {
        count ==1;
    }
    else 
    {
        for(n; n>0; n=n/10)
        {
            count++ ;
        }
    }
    cout << "Total Number of Digits: " << count;
    return 0;
}