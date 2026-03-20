#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : " ;
    cin >> n;
    int fact= 1;

    for(int i=1; i<=5; i++)
    {
        fact = fact*i;
    }
    cout << fact;
}