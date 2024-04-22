#include<iostream>
using namespace std;

class Number
{
    public:
        int iNo;
        void Accept()
        {
            cout<<"Enter number:"<<endl;
            cin>>iNo;
        }

        void Display()
        {
            cout<<"Entered number is: "<<iNo<<endl;
        }

        void FibonacciSeries()
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
};

int main()
{
    Number nobj;

    nobj.Accept();
    nobj.Display();
    nobj.FibonacciSeries();

    return 0;
}