#include<iostream>
using namespace std;

bool CheckArmstrong(int iNo)
{
    int iTemp=0,iDigCnt=0,iDigit=0,iMult=1,iSum=0;

    iTemp=iNo;

    while(iNo!=0)
    {
        iDigCnt++;
        iNo=iNo/10;
    }

    iNo=iTemp;

    while(iNo!=0)
    {
        iMult=1;
        iDigit=iNo%10;

        for(int i=1;i<=iDigCnt;i++)
        {
            iMult=iMult*iDigit;
        }
        iSum=iSum+iMult;
        iNo=iNo/10;
    }

    if(iSum==iTemp)
    {
        return true;
    }

    else
    {
        return false;
    }

}

int main()
{
    int iValue=0;
    bool bRet=false;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    bRet=CheckArmstrong(iValue);

    if(bRet==true)
    {
        cout<<iValue<<" is an armstrong number"<<endl;
    }

    else
    {
        cout<<iValue<<" is an not an armstrong number"<<endl;
    }

    return 0;
}



