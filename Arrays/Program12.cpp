//Reverse the array

#include<iostream>
using namespace std;

int main()
{
    int Arr[]={1,2,3,4,5};

    int Length=sizeof(Arr)/sizeof(Arr[0]);

    //cout<<Length<<endl;

    int Start=0;
    int End=(Length-1);
    int Temp=0;

    while(Start<End)
    {
        Temp=Arr[Start];
        Arr[Start]=Arr[End];
        Arr[End]=Temp;
        Start++;
        End--;
    }
    

    //Reverse the array

    for(int iCnt=0;iCnt<Length;iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }


    return 0;
}