#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter two Numbers: ";

    cin >> a >> b;
    int c = max(a,b);

    for(int i= c; i<=a*b; i++)
    {
        if(i%a==0 && i%b==0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}