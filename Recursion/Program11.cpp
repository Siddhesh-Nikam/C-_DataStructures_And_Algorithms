//Sum of square of N numbers

//Power using recursieve approach


#include<iostream>
using namespace std;

int Power(int Base,int Raise)
{
    int iAns = 1 ;
    for(int iCnt = 1 ;iCnt<=Raise ; iCnt++)
    {
        iAns =iAns * Base;  
    }
    return iAns;
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





