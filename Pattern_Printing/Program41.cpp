

//    1
//   21
//  321
// 4321

#include<iostream>
using namespace std;

void Display(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        for(int j=1;j<=iNo-i;j++)
        {
            cout<<" ";   
        }

        for(int j=i;j>0;j--)
        {
            cout<<j;
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

#include<iostream>
using namespace std;

void Display(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        for(int j=1;j<=iNo-i;j++)
        {
            cout<<" ";   
        }

        for(int j=i;j>0;j--)
        {
            cout<<j;
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