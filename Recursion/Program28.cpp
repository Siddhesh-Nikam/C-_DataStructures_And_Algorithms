//6
//a b c d e f 

#include<iostream>
using namespace std;

void Display(int iNo)
{
    char ch = 'a' ;
    int iCnt =  0 ;

    while(iCnt < iNo)
    {
        cout<<ch<<endl;
        ch++;
        iCnt++;
    }
}

int main()
{
    int iValue = 0 ;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}




