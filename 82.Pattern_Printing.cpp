#include<iostream>
using namespace std;
int main()
{
    char n;
    cout << "Enter the character :" ;
    cin >> n;

    for(char i=97; i<=n; i++)
    {
        for(char j=97; j<=n; j++)
        {
            cout << j;
            cout << " " ;
        }
        cout << endl;

    }
    return 0;
}