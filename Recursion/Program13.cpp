//Fibonacci series recursive series

#include<iostream>
using namespace std;

int ReturnFibonacci(int iNo)
{
    if (iNo<=1)
    {
        return iNo;
    }

    return ReturnFibonacci(iNo-1) + ReturnFibonacci(iNo-2);
}


int main()
{
    int iValue = 0 ;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    int Ans = ReturnFibonacci(iValue);

    cout<<"Fibonacci value is : " << Ans << endl;

    return 0;
}