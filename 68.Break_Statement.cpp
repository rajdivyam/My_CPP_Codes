#include<iostream>
using namespace std;
int main()
{
    int a;
    a = 1;

    while(a<=5)
    {
        if(a==3)
        {
            break;
        }

        cout << a << " ";
        a++;
    }
    cout << a;
    return 0;
}