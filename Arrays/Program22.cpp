//Majority element
//TC -> O(N2)

#include<iostream>
using namespace std;

int main()
{
    int Arr[] = {3,3,6,2,2,2,2};

    int iLength = sizeof(Arr)/sizeof(Arr[0]);

    cout<< "Length of array is :" << iLength<<endl;

    for(int i=0;i<iLength;i++)
    {
        int element=Arr[i];
        int Count = 0 ;

        for(int j=0;j<iLength;j++)
        {
            if(Arr[j]==element)
            {Count++;}
        }

        if(Count<=(iLength/2))
        {
            cout<< Arr[i] << " is not a majority element" << endl;
        }

        else
        {
            //return Arr[i];
            //cout<<Arr[i]<<endl;
            cout<< Arr[i] << " is a majority element" << endl;
        }
    }

    return 0;
}

