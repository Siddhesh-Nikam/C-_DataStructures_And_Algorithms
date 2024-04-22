//Majority element
//TC -> O(N)

#include<iostream>
using namespace std;

int main()
{
    int Arr[] = {2,2,3,3,1,2,2};

    int iLength = sizeof(Arr)/sizeof(Arr[0]);

    cout<< "Length of array is :" << iLength<<endl;

    int res=0;
    int Count = 1;

    //Find the majority element
    for(int i=1;i<iLength;i++)
    {
        if(Arr[res]==Arr[i])
        {Count++;}

        else
        {Count--;}

        if(Count == 0)
        {
            Count=1;
            res=i;
        }
    }

    //Find the frequency of majority element

    for(int i=0;i<iLength;i++)
    {
        if(Arr[res]==Arr[i])
        {Count++;}
    }

    if(Count<=(iLength/2))
    {
        return -1;
    }

    else
    {
        //return Arr[res];
        cout<<Arr[res]<<endl;
    }


    return 0;
}

