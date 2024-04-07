//Add the digits in number
//153-> 1+5+3=9

#include<iostream>
using namespace std;

int AddDigits(int iNo)
{
    int iDigit=0;
    int iSum=0;

    while(iNo>0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
    }
    return iSum;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    iRet=AddDigits(iValue);

    cout<<"Sum of digits of number:"<<iRet<<endl;

    return 0;
}