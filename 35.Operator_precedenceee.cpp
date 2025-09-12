#include<iostream>
using namespace std;
int main()
{
    int a = 5 - 17 * 6;
    int b = 5 - (17 * 6);
    int c = (5 - 17) * 6;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}