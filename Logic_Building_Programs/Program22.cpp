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
            cout<<"Enter number:" << iNo <<endl;
        }

        bool CheckPrime()
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
    bool bRet=false;

    Number nobj;
    nobj.Accept();
    nobj.Display();

    bRet=nobj.CheckPrime();

    if(bRet==true)
    {
        cout<<"Given is not prime number"<<endl;
    }

    else
    {
        cout<<"Given is prime number"<<endl;
    }

    return 0;
}