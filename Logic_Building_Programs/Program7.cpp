//Reverse the number in place

#include<iostream>
using namespace std;

int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0;

    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
    return iRev;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    iRet=Reverse(iValue);

    cout<<"Reverse number:"<<iRet<<endl;

    return 0;
}