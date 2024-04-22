  
//Butterfly pattern


// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int i,j;

    //Part 1

    for(int i=1;i<=iNo;i++)
    {
        // star *

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }

        // spaces

        for(int k=1;k<=2*(iNo-i);k++)
        {
            cout<<" ";
        }
        
        // star *

        for(int l=1;l<=i;l++)
        {
            cout<<"*";
        }

        cout<<endl;

    }

    //Part 2

    for(int i=iNo;i>0;i--)
    {
        // star *

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }

        // spaces

        for(int k=1;k<=2*(iNo-i);k++)
        {
            cout<<" ";
        }
        
        // star *

        for(int l=1;l<=i;l++)
        {
            cout<<"*";
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