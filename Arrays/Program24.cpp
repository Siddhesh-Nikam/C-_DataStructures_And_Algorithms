//Equilibrium Point

// Input: 
// n = 5 
// A[] = {1,3,5,2,2} 
// Output: 
// 3 

//Brute Force

#include<iostream>
using namespace std;

int main()
{
    int Arr[]={1,3,5,2,2};

    int iLength=sizeof(Arr)/sizeof(Arr[0]);

    cout<<"Length of array is:"<<iLength<<endl;

    for(int i=0;i<iLength;i++)
    {
        int leftSum=0,rightSum=0;

        for(int j=i-1;j>=0;j--)
        {
            leftSum=leftSum+Arr[j];
        }

        for(int k=i+1;k<iLength;k++)
        {
            rightSum=rightSum+Arr[k];
        }

        if(leftSum==rightSum)
        {
            cout<<i+1<<endl;
        }
    }    

    return 0;
}