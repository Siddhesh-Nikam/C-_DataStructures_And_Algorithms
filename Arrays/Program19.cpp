//Maximum Consecutive One's

#include<iostream>
using namespace std;

int MaxConsOne(int*Brr,int iLength)
{
    int i=0,iCounter=0,iMax=0;
    for(i=0;i<iLength;i++)
    {
        if(Brr[i]==1)
        {
            iCounter++;
            iMax=max(iMax,iCounter);
        }

        if(Brr[i]==0)
        {
            iCounter=0;
        }
    }
    return iMax;
}

int main()
{
    int*Arr=NULL;
    int iLength=0,iRet=0;

    cout<<"Enter number of elements : "<<endl;
    cin>>iLength;

    Arr = new int;

    cout<<"Enter elements"<<endl;
    for(int i=0;i<iLength;i++)
    {
        cin>>Arr[i];
    }


    cout<<"Entered elements are"<<endl;
    for(int i=0;i<iLength;i++)
    {
        cout<<" "<<Arr[i];
    }

    cout<<endl;

    iRet=MaxConsOne(Arr,iLength);

    cout<<"Maximum consecutive one's : "<< iRet <<endl;

    return 0;
}