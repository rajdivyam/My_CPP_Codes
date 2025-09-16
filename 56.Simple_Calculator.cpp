#include<iostream>
using namespace std;
int main()
{
    int num1,num2,operatorr;
    cout << "Enter the first Number:" ;
    cin >> num1;
    cout << "Enter the Second Number:" ;
    cin >> num2;

    cout << "Enter Operator:" ;
    cin >> operatorr ;
    
    if(operatorr==1)
    {
        cout << num1+num2 ;
    }
    else if(operatorr==2)
    {
        cout << num1-num2 ;
    }
    else if(operatorr==3)
    {
        cout << num1*num2;
    }
    else
    {
        cout << "Invalid Input for operator" ;
    }
    return 0;
    
}

/* In operatorr variable when we give it value=1 then it adds 
when we give value 2 , it subtracts , when we give it value 3, 
then it multiplies
other than this are for invalid output*/