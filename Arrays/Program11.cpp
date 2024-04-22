//Check number

#include<iostream>
using namespace std;

int Range(int*Brr,int iCount,int iSize)
{
    int iCounter = 0 ;
    for(int iCnt = 0 ;iCnt<iSize ;iCnt++)
    {
        if(Brr[iCnt] == iCount)
        {
            iCounter++;
        }
    }
    return iCounter;
}

int main()
{
    int*Arr=NULL;
    int iLength = 0 ,iCnt = 0 , iRet = 0 , iCount = 0 ;

    cout<<"Enter the number of elements"<<endl;
    cin>>iLength;

    Arr = new int;

    cout<<"Enter numbers:"<<endl;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Enter number"<<endl;
    cin>>iCount;

    iRet = Range(Arr,iCount,iLength);

    cout<<"Count of range is:"<<iRet<<endl;

    return 0;
}