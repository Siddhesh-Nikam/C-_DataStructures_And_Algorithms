//Count number of digits in number

#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
    int iDigit=0,iCnt=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iCnt++;
        iNo=iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    iRet=CountDigits(iValue);

    cout<<"Number of digits in number is:"<<iRet<<endl;

    return 0;
}