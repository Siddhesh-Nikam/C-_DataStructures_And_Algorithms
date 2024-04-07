//Addition of two numbers

#include<iostream>
using namespace std;

int Addition(int iNo1,int iNo2)
{
    int iSum=0;
    iSum=iNo1+iNo2;
    return iSum;
}

int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    cout<<"Enter first number:"<<endl;
    cin>>iValue1;

    cout<<"Enter second number:"<<endl;
    cin>>iValue2;

    iRet=Addition(iValue1,iValue2);

    cout<<"Addition is:"<<iRet<<endl;

    return 0;
}