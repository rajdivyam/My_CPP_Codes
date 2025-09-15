#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number:" ;
    cin >> a;
    if(a>0)
    {
        cout << "The Number is Positive ";
    }
    else if(a<0)
    {
        cout << "The number is Negative" ;
    }
    else 
    {
    cout << "The number is Zero";
    }
    return 0;
}
