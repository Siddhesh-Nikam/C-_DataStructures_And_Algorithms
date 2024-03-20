// Print n to 1 number

#include<iostream>
using namespace std;

//Itterative approach using function

// void Display(int iNo)
// {
//     for(int iCnt = iNo;iCnt>0;iCnt--)
//     {
//         cout<< iCnt  <<endl;
//     }
// }

//Recursive approach using function


void Display(int iNo)
{
    if(iNo == 1)
    {
        cout<<1<<endl;
        return;
    }

    cout<<iNo<<endl;
    Display(iNo-1);
}



int main()
{
    int iValue = 0 ;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}