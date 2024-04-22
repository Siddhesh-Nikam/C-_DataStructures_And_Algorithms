//Reverse the array

#include<iostream>
using namespace std;

void Reverse(int*Brr,int iLength)
{

    int Start=0;
    int End=iLength-1;
    int Temp=0;

    while(Start<End)
    {
        Temp=Brr[Start];
        Brr[Start]=Brr[End];
        Brr[End]=Temp;
        Start++;
        End--;
    }

    cout<<"Reverse of array is:"<<endl;

    for(int i=0;i<iLength;i++)
    {
        cout<<" "<<Brr[i];
    }
}

int main()
{
    int*Arr=NULL;
    int iLength=0;

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


    Reverse(Arr,iLength);


    return 0;
}