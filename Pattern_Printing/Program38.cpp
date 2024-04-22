
//    1
//   22
//  333
// 4444

#include<iostream>
using namespace std;

void Display(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        for(int j=1;j<=iNo;j++)
        {
            if(j<=iNo-i)
            {
                cout<<" ";
            }

            else
            {
                cout<<i;
            }
        }
        cout<<endl;
    }
}

int main()
{
    int iValue=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}