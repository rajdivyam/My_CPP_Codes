#include<iostream>
using namespace std;
int main()
{
    int a = 33;

    cout << (a >> 1) << endl;
    cout << (a >> 2) << endl;

    int b = 4;
    int c = (a >> b);
    cout << c << endl;
    return 0;

}