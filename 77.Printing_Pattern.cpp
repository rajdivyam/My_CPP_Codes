#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number:" ;
    cin >> n;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(j==1 || j==i || i<=n)
            {
                cout << "* " ;
            }
            else 
            {
                cout << "  " ;
            }
        }
        cout << endl;
    }
} 