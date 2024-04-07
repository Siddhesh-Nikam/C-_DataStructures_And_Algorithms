//Count odd digits in number

#include<iostream>
using namespace std;

int CountOdd(int iNo)
{
    int iCntOdd=0,iDigit=0;

    while(iNo>0)
    {
        iDigit=iNo%10;
        if((iDigit%2)!=0)
        {
            iCntOdd++;
        }
        iNo=iNo/10;
    }
    return iCntOdd;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter numbers:"<<endl;
    cin>>iValue;

    iRet=CountOdd(iValue);

    cout<<"Count of odd digits is:"<<iRet<<endl;

    return 0;
}



