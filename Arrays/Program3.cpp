//Return maximum elements in array


#include<iostream>
using namespace std;

int Minimum(int*Brr,int iSize)
{
    int iMin = Brr[0] ;

    for(int iCnt = 0 ; iCnt<iSize ;iCnt++)
    {
        if(Brr[iCnt] < iMin)
        {
            iMin=Brr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int*Arr=NULL;
    int iLength = 0 ,iCnt = 0 , iRet = 0;

    cout<<"Enter the number of elements"<<endl;
    cin>>iLength;

    Arr = new int;

    cout<<"Enter numbers:"<<endl;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    iRet = Minimum(Arr,iLength);

    cout<<"Minimum is:"<<iRet<<endl;

    return 0;
}