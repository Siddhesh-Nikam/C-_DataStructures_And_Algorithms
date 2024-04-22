#include<iostream>
using namespace std;

int Sum(int iNo)
{
    int Sum=0,iDigit=0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        Sum=Sum+iDigit;
        iNo=iNo/10;
    }
    return Sum;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    iRet=Sum(iValue);

    cout<<"Sum of given number is:"<<iRet<<endl;

    return 0;
}