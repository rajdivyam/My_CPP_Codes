#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 4;
    bool res = ((a==b) && cout << "Geeks") ;
    // If the first operand of && is false, then the second part is not even evaluated
    // (this is called short-circuit evaluation).
    return 0;
}