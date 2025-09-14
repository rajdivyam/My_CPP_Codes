#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int a,r,n,x;
    cout << "Enter the first number:" ;
    cin >> a;
    cout << "Enter the common Ratio:" ;
    cin >> r;
    cout << "Enter the term which you want to find:" ;
    cin >> n;

    cout << endl;

    x = a* pow(r, n-1) ;
    cout << "The number is:" << x;
    return 0;

}