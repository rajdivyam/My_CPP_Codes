#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 4;

    a += b -= 6;            // a = a + b , b = b - 6
    cout << a << endl;
    cout << b << endl;
    return 0;
}