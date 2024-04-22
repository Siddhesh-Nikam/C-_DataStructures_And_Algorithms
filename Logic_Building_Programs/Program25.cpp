//Perfect number

#include<iostream>
using namespace std;

class Number
{
    public:

    int iNo;

    void Accept()
    {
        cout<<"Enter number:"<<endl;
        cin>>iNo;
    }

    void Display()
    {
        cout<<"Entered number is:"<<iNo<<endl;
    }
    
    bool CheckPerfect()
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

    bool bRet=false;

    nobj.Accept();

    nobj.Display();

    bRet=nobj.CheckPerfect();

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



