#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    int n;
    cin >> n;
    while(true) //if we type true or 1 in the while condition , then it print the infinite loop 
    {                     // but the loop can not be seen in the output window
        cout << "Abhimanyu" ;
        i++;
    }
}

//You never print a newline (\n) and never flush the buffer.

//So the program runs forever, but the text may not appear immediately, giving the illusion that “nothing is happening.”

// Program buffer me chala gaya hai 