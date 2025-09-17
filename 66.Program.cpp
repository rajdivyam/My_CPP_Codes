#include<iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Enter the Number :" ; // if you give output 0 , then it stops
        cin >> n;
        cout << "You Entered:" << n << endl;
    }while(n!=0);

    cout << "Program End" ;
}