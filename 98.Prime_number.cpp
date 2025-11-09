#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number:" ;
    cin >> n;

    if(n<2)
    {
        cout << "Not Prime" ;
    }
    else
    {
        for(int i=2; i<=n-1; i++)
        {
            if(n%i==0)
            {
                cout << "Not Prime" ;
                return 0;
            }
        }
        cout << "Prime" ;
        return 0;
    }
}