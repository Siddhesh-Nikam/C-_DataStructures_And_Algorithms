// Print 1 to n to even numbers

//H.W

#include<iostream>
using namespace std;

// void Display(int iNo,int N)
// {

//     if(iNo>=N)
//     {
//         return;
//     }
//     cout<<iNo<<endl;
//     Display(iNo+2,N);
// }

void Display(int iNo)
{
    if(iNo==2)
    {
        cout<<iNo<<endl;
        return;
    }

    Display(iNo-2);
    cout<<iNo<<endl;

    
}

int main()
{
    int iValue = 0 ;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    if((iValue%2)!=0)
    {
        iValue--;
    }

    Display(iValue);////Using only 1 argument

    //Display(2,iValue);//Using more than 1 argument

    return 0;
}
