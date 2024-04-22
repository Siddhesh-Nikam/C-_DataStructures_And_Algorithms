//Find minimum and maximum element in an array

#include<iostream>
using namespace std;

int Minimum(int*Brr,int iLength)
{
    int Min=0;
    Min=Brr[0];


    for(int i=0;i<iLength;i++)
    {
        if(Brr[i]<Min)
        {
            Min=Brr[i];
        }
    }
    return Min;
}

int Maximum(int*Brr,int iLength)
{
    int Max=0;
    Max=Brr[0];

    for(int i=0;i<iLength;i++)
    {

        if(Brr[i]>Max)
        {
            Max=Brr[i];
        }
    }
    return Max;

}

int main()
{
    int*Arr=NULL;
    int iLength=0,iMin=0,iMax=0;

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

    iMin=Minimum(Arr,iLength);

    iMax=Maximum(Arr,iLength);

    cout<<"Minimum element in an array is:"<<iMin<<endl;

    cout<<"Maximum element in an array is:"<<iMax<<endl;

    return 0;
}