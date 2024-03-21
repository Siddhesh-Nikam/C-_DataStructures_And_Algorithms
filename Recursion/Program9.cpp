//Sum of n numbers

#include<iostream>
using namespace std;

int Sum(int iNo)
{
    if(iNo==1)
    {
        return 1;
    }
    return (iNo + Sum(iNo-1));
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    iRet = Sum(iValue);

    cout<<"Sum is:"<<iRet<<endl;

    return 0;
}