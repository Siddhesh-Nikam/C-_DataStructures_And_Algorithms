//Display the number backward

#include<iostream>
using namespace std;

void DisplayBackward(int iNo)
{
    for(int i=iNo;i>0;i--)
    {
        cout<<i<<endl;
    }
}

int main()
{
    int iValue=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    DisplayBackward(iValue);

    return 0;
}