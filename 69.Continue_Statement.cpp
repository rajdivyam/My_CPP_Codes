#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=5; i++)
    {
        if(i==3)     
        {
            continue;   // skip when i = 3 and prints 1 2 4 5 
        }
        cout << i << " " ;
    }
    return 0;
}