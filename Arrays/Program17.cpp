//Second largest element in an array
//Optimal approach


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //int Arr[] = {1,2,4,7,7,5};

    //int Arr[] = {7,7,7,7,7,7};

    //int Arr[] = {1,2,3,4,5,6,7};

    int Arr[] = { 4,7,87,73,23,45};


    int iLength = sizeof(Arr)/sizeof(Arr[0]);

    cout<< "Length of array is :" << iLength<<endl;

    for(int iCnt = 0 ;iCnt<iLength;iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }

    int iLargest = Arr[0];

    //If array contails -ve number consider this INT_MIN
    int iSecondLargest = -1 ;

    for(int i = 1 ; i < iLength ;i++)
    {
       if(Arr[i]>iLargest)
       {
            // iLargest=Arr[i];
            // iSecondLargest = Arr[i-1];

            iSecondLargest = iLargest;
            iLargest=Arr[i];
            
       }

       else if(Arr[i]<iLargest && (Arr[i]>iSecondLargest))
       {
            iSecondLargest = Arr[i];
       }
    }

    cout<<"Second largest element is:"<<iSecondLargest<<endl;

    return 0;
}

//Sorting => Time Complexity => O(N+N) => O(2N)

