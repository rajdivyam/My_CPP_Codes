#include<iostream>
using namespace std;
int main()
{
    int n, sum;
    cout << "Enter the number for which you have to find the sum:" ;
    cin >> n;
    sum = 0;
    for(int x=1; x<=n; x++)
    sum = sum + x;
    cout << "The sum is:" << sum;
    return 0;
}