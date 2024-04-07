//Check whether given number is perfect or not

//1 + 2 + 4 + 7 + 14 = 28.

#include<iostream>
using namespace std;

bool PerfectNumber(int iValue)
{
    int iSum=0;
    for(int iCnt=1;iCnt<iValue;iCnt++)
    {
        if((iValue%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
    }
    if(iSum==iValue)
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

    bRet=PerfectNumber(iValue);

    if(bRet==true)
    {
        cout<<"Given number is perfect number\n";
    }

    else
    {
        cout<<"Given number is not perfect number\n";
    }

    return 0;
}


