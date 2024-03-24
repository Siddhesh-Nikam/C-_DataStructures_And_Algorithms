#include<iostream>
using namespace std;

int FactorialI(int iNo)
{
    int iFact=1,iCnt=1;

    while(iCnt<=iNo)
    {
        iFact=iFact*iCnt;
        iCnt++;
    }
    return iFact;
    
}

int FactorialR(int iNo)
{
    static int iFact=1;
    static int iCnt=1;

    if(iCnt<=iNo)
    {
        iFact=iFact*iCnt;
        iCnt++;
        FactorialR(iNo);
    }
    return iFact;
}

int main()
{
    int iValue =0,iRet=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    //iRet = FactorialI(iValue);

    iRet = FactorialR(iValue);

    cout<<"Factorial is :"<<iRet<<endl;

    return 0;
}