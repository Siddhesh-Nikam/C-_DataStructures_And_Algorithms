// Print 1 to n 

#include<iostream>
using namespace std;

//Itterative approach using function

// void Display(int iNo)
// {
//     for(int iCnt = 1;iCnt<=iNo;iCnt++)
//     {
//         cout<< iCnt  <<endl;
//     }
// }

////////////////////////*********************////////////////////////


//Recursive approach using function

//Using more than 1 argument

void Display(int iNo,int N)
{

    if(iNo==N)
    {
        cout<<iNo<<endl;
        return;
    }
    cout<<iNo<<endl;
    Display(iNo+1,N);
}

// Display(1,iNo)    //   ->Function Call

////////////////////////*********************////////////////////////

//Using only 1 argument

void Display(int iNo)
{

    if(iNo==1)
    {
        cout<<1<<endl;
        return;
    }

    Display(iNo-1);
    cout<<iNo<<endl;
}


int main()
{
    int iValue = 0 ;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    Display(iValue);////Using only 1 argument

    //Display(1,iValue);//Using more than 1 argument

    return 0;
}