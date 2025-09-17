#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    while(i<5);   // due to semicolon at the end the program never goes to the cout to print 
    //                    co this make s the loop infinite but print nothing
    {
        cout << "GFG\n" << flush ;
        i++ ;
    }
}