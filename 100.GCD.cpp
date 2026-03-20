#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the two Numbers:";
    cin >> a >> b;

    int c = 1;

    for(int i=1; i<=min(a,b); i++)
    {
        if(a%i==0 && b%i==0)
        {
            
            c = i;
        }
    }
    cout << c;
}