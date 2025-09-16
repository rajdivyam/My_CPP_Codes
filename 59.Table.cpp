#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the Number for Table:" ;
    cin >> a;
    for(int i=1; i<11; i++)
    {
        cout << a*i << endl;;
    }
    return 0;
}