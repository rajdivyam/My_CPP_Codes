#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the Number:" ;
    cin >> a;
    if(a>0)
    {
        if(a%2==0)
        {
            cout << "Even Positive" ;
        }
        else 
        {
            cout << "Odd Positive" ;
        }
    }
    else if(a<0)
    {
        if(a%2==0)
        {
        cout << "Even Negative" ;
        }
        else
        {
            cout << "Odd Negative" ;
        }
    }
    else 
    {
        cout << "Zero" ;
    }

    return 0;

}
