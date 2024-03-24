#include<iostream>
using namespace std;

int SumI(int*Brr,int iSize)
{
    static int iSum=0;
    static int iCnt=0;

    if(iCnt<iSize)
    {
        iSum=iSum+Brr[iCnt];
        iCnt++;
        SumI(Brr,iSize);
    }
    return iSum;
}

int main()
{
    int Arr[]={10,20,30,40};
    int iRet=0;

    iRet=SumI(Arr,4);

    cout<<"Sum of all elements in an array is:"<<iRet<<endl;

    return 0;
}