//Check whether given number is even or odd

bool CheckEven(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

#include<iostream>
using namespace std;

int main()
{
    int iValue=0;
    bool bRet=false;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    bRet=CheckEven(iValue);

    if(bRet==true)
    {
        cout<<iValue<< " is an even number"<<endl;
    }

    else
    {
        cout<<iValue<< " is an odd number"<<endl;
    }

    return 0;
}



