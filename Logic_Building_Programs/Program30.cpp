//IP=7512=7+5+1+2
//OP=15

#include<iostream>
using namespace std;

class Number
{
    public:

    int SumDigits(int iNo)
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

    int iValue=0;
    int iRet=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    iRet=nobj.SumDigits(iValue);

    cout<<"Sum of all digits in " << iValue + "is : "  << iRet;

    return 0;
}






