// Print n to 1 even number

#include<iostream>
using namespace std;

//Itterative approach using function

// void Display(int iNo)
// {
//     for(int iCnt = iNo;iCnt>0;iCnt--)
//     {
//         if((iCnt%2)==0)
//         {
//             cout<< iCnt  <<endl;
//         }
//     }
// }

//Recursive approach using function
//Only applicable for even input
//Try for odd input

void Display(int iNo)
{
    if(iNo == 2)
    {
        cout<<2<<endl;
        return;
    }

    cout<<iNo<<endl;
    Display(iNo-2);
}



int main()
{
    int iValue = 0 ;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}