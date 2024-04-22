#include<iostream>
using namespace std;

int SumR(int iNo)
{
    static int Sum=0;
    int iDigit=0;

    if(iNo!=0)
    {
        iDigit = iNo%10;
        Sum=Sum+iDigit;
        iNo=iNo/10;
        SumR(iNo);
    }
    return Sum;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    iRet=SumR(iValue);

    cout<<"Sum of given number is:"<<iRet<<endl;

    return 0;
}