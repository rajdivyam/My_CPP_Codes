#include<iostream>
using namespace std;
int main()
{
    int a,b ;
    cout << "Enter Current Day:" ;
    cin >> a;
    cout << "Enter No. of Days:" ;
    cin >> b;

    int c = b % 7 ;

    int ans = a - c ;

    if(ans <= 0)
    {
        cout << "The Day is:" << ans + 7;
    }
    else 
    {
        cout << "The Day is:" << ans;
    }
    


}