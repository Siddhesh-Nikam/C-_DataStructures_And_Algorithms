//Check whether given number is prime or not

#include<iostream>
using namespace std;

bool CheckPrime(int iNo)
{
    int iCnt=0;

    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iValue =0;
    bool bRet=false;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    bRet=CheckPrime(iValue);

    if(bRet==true)
    {
        cout<<iValue << " is not a prime number"<<endl;
    }

    else
    {
        cout<<iValue << " is a prime number"<<endl;
    }

    return 0;
}

