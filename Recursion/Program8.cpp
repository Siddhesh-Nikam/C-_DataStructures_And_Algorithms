//Factorial 


#include<iostream>
using namespace std;

int Factorial(int iNo)
{
    if(iNo==1)
    {
        return 1;
    }
    return (iNo*Factorial(iNo-1));
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    iRet = Factorial(iValue);

    cout<<"Factorial is:"<<iRet<<endl;

    return 0;
}