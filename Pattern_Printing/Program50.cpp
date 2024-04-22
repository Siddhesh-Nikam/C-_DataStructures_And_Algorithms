  
//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int i=0,j=0,k=0,l=0;
    
    for(i=1;i<=iNo;i++)
    {
        for(j=1;j<=iNo-i;j++)
        {
            cout<<" ";
        }

        for(k=1;k<=i;k++)
        {
            cout<<k;
        }

        for(l=i-1;l>=1;l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
}

int main()
{
    int iValue=0;

    cout<<"Enter number:\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}