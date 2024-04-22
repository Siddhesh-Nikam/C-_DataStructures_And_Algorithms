//Remove duplicate element in a sorted array

#include<iostream>
using namespace std;

int RemoveDuplicateElements(int*Brr,int iLength)
{
    int i=0;
    for(int j=1;j<iLength;j++)
    {
        if(Brr[i]!=Brr[j])
        {
            Brr[i+1]=Brr[j];
            i++;
        }
    }
    return (i+1);
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

    iRet=RemoveDuplicateElements(Arr,iLength);

    cout<<"After removing duplicate elements are"<<endl;
    for(int i=0;i<iRet;i++)
    {
        cout<<" "<<Arr[i];
    }

    return 0;
}