#include<iostream>
using namespace std;
int main()
{
    int a,d,n,x;
    cout << "Enter the first Number:" ;
    cin >> a;
    cout << "Enter the common Difference:" ;
    cin >> d;
    cout << "Position of the number for which you have to find:" ;
    cin >> n;
    cout << endl  ;

    x = a + (n-1)*d;
    cout << "The number is:" << x;
    return 0;
}