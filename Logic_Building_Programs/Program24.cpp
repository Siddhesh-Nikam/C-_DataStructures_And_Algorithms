//Perfect number

#include<iostream>
using namespace std;

class Number
{
    public:
    
    bool CheckPerfect(int iNo)
    {
        int iSum=0;

        for(int iCnt=1;iCnt<iNo;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                iSum=iSum+iCnt;
            }
        }
        if(iSum==iNo)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};



int main()
{
    Number nobj;

    int iValue=0;
    bool bRet=false;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    bRet=nobj.CheckPerfect(iValue);

    if(bRet==true)
    {
        cout<<"Given number is perfect number"<<endl;
    }

    else
    {
        cout<<"Given number is not perfect number"<<endl;
    }

    return 0;
}



