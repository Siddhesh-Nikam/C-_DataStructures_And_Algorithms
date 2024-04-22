//Return average of elements in array


#include<iostream>
using namespace std;

int Sum(int*Brr,int iSize)
{
    int iSum = 0 ;

    cout<<"Sum of elements are:"<<endl;
    
    for(int iCnt = 0 ;iCnt<iSize ;iCnt++)
    {
        iSum = iSum + Brr[iCnt];
    }
    return iSum/iSize;
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

    iRet = Sum(Arr,iLength);

    cout<<"Average is:"<<iRet<<endl;

    return 0;
}