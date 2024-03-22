//Fibonacci series Itterative approch

#include<iostream>
using namespace std;

void DisplayFibonacci(int iNo)
{
    int x = 0 , y = 1 , z =0 ;

    for(int iCnt = 0;iCnt<iNo;iCnt++)
    {
        cout <<x<<" ";

        z=x+y;
        x=y;
        y=z;
    }
}


int main()
{
    int iValue = 0 ;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    DisplayFibonacci(iValue);

    return 0;
}