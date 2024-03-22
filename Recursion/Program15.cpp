#include<iostream>
using namespace std;

void ReverseNumberI(int iNo)
{
    while(iNo!=0)
    {
        int iDigit = iNo%10;
        cout<<iDigit;
        iNo=iNo/10;
    }
}

void ReverseNumberR(int iNo)
{
    if(iNo!=0)
    {
        int iDigit = iNo%10;
        cout<<iDigit;
        iNo=iNo/10;
        ReverseNumberR(iNo);//Tail Recursion
    }
}

int main()
{
    int iValue = 0 ;

    cout<<"Enter number:"<<endl;
    cin>> iValue;

    //ReverseNumberI(iValue);

    ReverseNumberR(iValue);

    return 0;
}