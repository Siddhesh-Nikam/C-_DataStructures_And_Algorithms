#include<iostream>
using namespace std;

class Number
{
    public :
    
    bool CheckPrime(int iNo)
    {
        for(int iCnt=2;iCnt<iNo;iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                return true;
            }   
        }
        return false;
    }
};

int main()
{
    int iValue=0;
    bool bRet=false;

    Number nobj;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    bRet=nobj.CheckPrime(iValue);

    if(bRet==true)
    {
        cout<<iValue<<" is not prime number"<<endl;
    }

    else
    {
        cout<<iValue<<" is prime number"<<endl;
    }

    return 0;
}