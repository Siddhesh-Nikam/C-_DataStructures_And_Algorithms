//Second largest element in an array
//Better approach

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //int Arr[] = {1,2,4,7,7,5};

    int Arr[] = {7,7,7,7,7,7};

    //int Arr[] = {1,2,3,4,5,6,7};


    int iLength = sizeof(Arr)/sizeof(Arr[0]);

    cout<< "Length of array is :" << iLength<<endl;

    for(int iCnt = 0 ;iCnt<iLength;iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }

    int iLargest = Arr[0];

    for(int i = 1 ; i < iLength ;i++)
    {
       if(Arr[i]>iLargest)
       {
            iLargest=Arr[i];
       }
    }

    cout<<"Largest element is:"<<iLargest<<endl;

    //Use this approach in following case
    //int Arr[] = {1,2,3,4,5,6,7};
    
    // int Largest = 0 ;
    // Largest = Arr[iLength-1];
    // cout<<"Largest element is:" << Largest<<endl;



    int iSecondLargest = -1 ;

    for(int i =0 ; i<iLength ; i++)
    {
        if((Arr[i]>iSecondLargest) && (Arr[i]!=iLargest))
        iSecondLargest = Arr[i];
    }

    cout<<"Second largest element is : "<<iSecondLargest<<endl;
    
    return 0;
}

//Sorting => Time Complexity => O(N+N) => O(2N)

