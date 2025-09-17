#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the Number:" ;
    cin >> a;
    for(int i=2; i<=a; i++)
    {
        if(a%i==0)
        {
            cout << "Smallest Divisor:" << i ;
            break;
        }
    }
    return 0;
}

// This is the program where we have to find the smallest number which divides the 
// given number except 1.