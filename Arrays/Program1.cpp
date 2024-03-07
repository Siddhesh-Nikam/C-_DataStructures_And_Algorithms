//Display elements in array


#include<iostream>
using namespace std;

void Display(int*Brr,int iSize)
{
    cout<<"Entered elements are:"<<endl;

    for(int iCnt = 0 ;iCnt<iSize ;iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }
}

int main()
{
    int*Arr=NULL;
    int iLength = 0 ,iCnt = 0 ;

    cout<<"Enter the number of elements"<<endl;
    cin>>iLength;

    Arr = new int;

    cout<<"Enter numbers:"<<endl;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Display(Arr,iLength);

    return 0;
}