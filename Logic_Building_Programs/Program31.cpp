#include <iostream>
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

        int SumDigits()
        {
            int iDigit=0,iSum=0;

            while(iNo!=0)
            {
                iDigit=iNo%10;
                iSum=iSum+iDigit;
                iNo=iNo/10;
            }
            return iSum;
        }  
};

int main()
{
    Number nobj;

    int iRet=0;

    nobj.Accept();
    nobj.Display();
    iRet=nobj.SumDigits();

    cout<<"Sum of all digits is: " << iRet <<endl;


    return 0;
}