#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number: " ;
    cin >> n;

    int sum = 1;
    for(int i =2; i<=n; i++)
    {
        if(i%2!=0)
        {
            sum = sum +i;
        }
    }
    cout << sum ;
    return 0;
}