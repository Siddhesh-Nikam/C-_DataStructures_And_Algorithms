//Sort arrays in 0's,1's and 2's

#include<iostream>
using namespace std;

void Sort(int*Brr,int iLength)
{
    int Temp=Brr[0];

    for(int i=0;i<iLength-1;i++)
    {
        Brr[i]=Brr[i+1];
    }
    Brr[iLength-1]=Temp;
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

    Sort(Arr,iLength);

    for(int i=0;i<iLength;i++)
    {
        cout<<" "<<Arr[i];
    }


    return 0;
}