#include<iostream>
using namespace std;

void FibonacciSeries(int iNo)
{
    int x=0;
    int y=1;
    int result=0;

    for(int i=1;i<=iNo;i++)
    {
        cout<<x<<"\t";
        result=x+y;
        x=y;
        y=result;
    }
}

int main()
{
    int iValue=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    FibonacciSeries(iValue);

    return 0;
}