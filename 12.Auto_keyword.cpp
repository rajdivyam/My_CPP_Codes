#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto a = 5;
    auto b = 4.45;
    cout << a << "\n" << b << "\n" ;
    cout << typeid(a).name() << "\n";
    cout << typeid(b).name() << "\n";
    return 0;
}