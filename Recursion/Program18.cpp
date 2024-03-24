#include<iostream>
using namespace std;

int SumI(int*Brr,int iSize)
{
    int iSum=0;
    int iCnt=0;

    while(iCnt<iSize)
    {
        iSum=iSum+Brr[iCnt];
        iCnt++;
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