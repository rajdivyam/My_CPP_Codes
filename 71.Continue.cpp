#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    do
    {
        i++;
        if(i==3)
        {
            continue;
        }
        cout << i << " " ;
    }while(i<=5);
    return 0;
}