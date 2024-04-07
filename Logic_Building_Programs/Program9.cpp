//Count even digits in number

#include<iostream>
using namespace std;

int CountEven(int iNo)
{
    int iCntEven=0,iDigit=0;

    while(iNo>0)
    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
            iCntEven++;
        }
        iNo=iNo/10;
    }
    return iCntEven;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter numbers:"<<endl;
    cin>>iValue;

    iRet=CountEven(iValue);

    cout<<"Count of even digits is:"<<iRet<<endl;

    return 0;
}



