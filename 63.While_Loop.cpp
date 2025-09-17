#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    int n;
    while(1)
    {
        cout << "Abimanyu singh" << flush ;
    }
    return 0;
}

// this program print the infinite looop because in the condition , 
// we give the value 1 , which is always true.

// In the previous program the cout does not print the name , because program get
// into the buffer , but in this program , i remove the buffer , and 
// flush it , due to flush , it get print 
// and prints the infinite loop 