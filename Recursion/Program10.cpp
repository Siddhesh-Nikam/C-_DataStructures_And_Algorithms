#include<iostream>
using namespace std;

int Power(int Base,int Raise)
{
    if(Raise==0)
    {
        return 1;
    }
    
    return (Base*Power(Base,(Raise-1)));
}

int main()
{
    int Base = 0 , Raise = 0 , iRet = 0 ;
    
    cout<<"Enter base:"<<endl;
    cin>>Base;
    
    cout<<"Enter raise:"<<endl;
    cin>>Raise;
    
    iRet  = Power(Base,Raise);
    
    cout<<"Answer is:" << iRet << endl;
    
    return 0;
}