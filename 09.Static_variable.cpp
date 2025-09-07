#include<iostream>
using namespace std;
int main()
{
    static int a ;
    a = 0;
    a++ ;
    cout << a << "\n";
    a++;
    cout << a;
    return 0;

}