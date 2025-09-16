#include<iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter the Name:" ;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if(i%2==0)
        cout << s[i] ;
    }
    return 0;
}