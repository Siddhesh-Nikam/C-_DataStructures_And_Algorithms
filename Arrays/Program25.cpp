//Equilibrium Point

// Input: 
// n = 5 
// A[] = {1,3,5,2,2} 
// Output: 
// 3 

//Optimal 

#include<iostream>
using namespace std;

int main()
{
    int Arr[]={1,3,5,2,2};

    int iLength=sizeof(Arr)/sizeof(Arr[0]);

    cout<<"Length of array is:"<<iLength<<endl;

    int Sum=0,leftSum=0,rightSum=0;

    for(int i=0;i<iLength;i++)
    {
        Sum=Sum+Arr[i];
    }  

    for(int i=0;i<iLength;i++)
    {
        Sum=Sum-Arr[i];
        if(Sum==rightSum)
        {
            cout<<i+1;
        }

        else
        {
            rightSum=rightSum+Arr[i];
        }
    }  

    return 0;
}