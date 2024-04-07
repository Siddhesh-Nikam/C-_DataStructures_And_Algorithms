//Display the number forward

#include<iostream>
using namespace std;

void DisplayForward(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        cout<<i<<endl;
    }
}

int main()
{
    int iValue=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    DisplayForward(iValue);

    return 0;
}