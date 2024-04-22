//Second largest element in an array

//Brute Force approach

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int Arr[] = {1,2,4,7,7,5};
    //int Arr[] = {7,7,7,7,7,7};

    int Arr[] = {1,2,3,4,5,6,7};

    int iLength = sizeof(Arr)/sizeof(Arr[0]);

    cout<< "Length of array is :" << iLength<<endl;

    for(int iCnt = 0 ;iCnt<iLength;iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }


    //Sorted array :

    sort(Arr, Arr + iLength); //Inbuild function

    //Sorting => Time Complexity => NlogN 

    //Displaying the sorted array
 
    cout << "\nArray after sorting is " <<endl ;
    for (int i = 0; i < iLength; ++i)
    {
        cout << Arr[i] << endl;
    }

    // Logic for 2nd largest element

    for(int i = iLength - 2 ; i >= 0 ;i--)
    {
        int iSecondLargest = 0 ; 
        int iLargest = Arr[iLength - 1];

        if(Arr[i]!=iLargest)
        {
            iSecondLargest = Arr[i];
            cout<<"Second largest element is:"<<iSecondLargest<<endl;
            break;
        }

        //Sorting => Time Complexity => O(N)

    }
    
    return 0;
}

//Sorting => Time Complexity => NlogN + N
